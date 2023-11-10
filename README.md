# UE5InputDemo
 Demonstration of Enhanced input being set up on the player controller & passing values to the player via an interface.

 This is a basic setup, and as with everything, there are multiple ways to go about this, such as with the input values and pointer types; I'll try to cover as much as I can here while trying to keep things streamlined. I'll also post links to docs for more information.

 ## Getting Started, we'll handle the C++ part first, then the BP side.
 ### Input Actions
 So far, you have been shown how to set up input actions, and you end up with a big list of actions to add to your details panel. You have also been shown how to create data assets, which are a great way to keep your details panel organised.
 Add a new class of type **UDataAsset** Here you can define  what actions your controller will need using:
`UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UInputAction>Action;`

You could use `TObjectPtr<UInputAction>Move;` this will require a static cast to a const UInputAction*, or you can use what is shown in the example project, which is `class UInputAction* Move`, and then declare one for each in the header.

[Object References](https://medium.com/advanced-blueprint-scripting-in-unreal-engine/object-references-in-blueprints-4c0df7f4dc1d)
[TObjectptr](https://docs.unrealengine.com/5.0/en-US/API/Runtime/CoreUObject/UObject/TObjectPtr/)
[TSoftObject](https://docs.unrealengine.com/5.3/en-US/API/Runtime/CoreUObject/UObject/TSoftObjectPtr/)

Add actions for look and sprint, too.

## The Interface
Hopefully, you know this part by now, but if not, please refer to the slides.
Create UFUNCTIONs for your inputs like so:
`UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Action(const FInputActionInstance& Instance);`

 Here, we are saying that the Action function requires a parameter of type `FInputActionInstance`. You can also use `FInputActionValue`; they both do very similar things, but each has its own little caveats. You'll see both being used; the example project uses InputActionValue, and documentation tends to state Instance. They can have slightly different setups, so if using ActionValue, refer to the example character, I'll comment alternative options to code here and there.
[InputActionValue](https://docs.unrealengine.com/5.3/en-US/API/Plugins/EnhancedInput/FInputActionValue/)
[InputActionInstance](https://docs.unrealengine.com/4.26/en-US/API/Plugins/EnhancedInput/FInputActionInstance/)

![Input Type](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/ActionInstance.jpg)

Again, add functions for your input.

## The Player Controller
### Header
Here, I make a `TSoftObjectPtr` to `UInputMappingContext`, one to our data asset and a `TObjectPtr` to an AAtor to store the player in. 

Next, create an override to the `SetupInputCompnent()`, which is where setup in the player differs, as that needs `SetupPlayerInputController()`; see example character. 

Finally, add controller action methods which we will bind to, making sure to add ActionInstance parameters.
Don't forget your includes and forward declarations!

### CPP
First, setup the subsystem like so:

![Subsystem](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/Subsystem.png)

And set your player character pointer variable using `GetPawn()`; you'll use this with the interface calls; speaking of which, don't forget to include anything your forward declared in the header.
 you should have the following somewhere in your controller
 - EnhancedInputCOmponet.h
 - EnhancedSubsystems.h
 - InputMappingContext.h
 - an include to your interface
 - and one for the data asset
any errors, check for these!

In the `SetupInputComponent()`, we will bind our actions like so:

![Bindings](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/Bindings.png)

if you aren't using soft pointers you don't need the `if(_InputActions.LoadSynchronus())` condition; this just prevents the engine from crashing on play or you having to open your DA in the editor before playing.

Finally, your action methods; these just call your interface using `IYOURINTERFACENAME::Execute_Move` passing the player and the Instance.

## The Player Character
### Header
Nice and straightforward, firstly, add your interface by adding `, public IYOURINTERFACENAME` on the end of `: public character`
I have added a couple of variables for sprinting and general speeds and then added the virtual implementation functions of the interface.

### CPP

Set any variables, such as what I have done setting my walk speed, and then add in the functionality of your action functions. You can see my setup is a little different from the example character just to show different methods, such as the example character uses `AddMovementInput(GetActorForwardVector(), MovementVector.Y);` and using ActionValue doesn't require `.GetValue()` before `Get()`. Either way is fine.


## The Blueprint Setup
We now need to create blueprint instances on the editor side.
![GameMode](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/GameModeBP.png)

![PC/PCH](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/PC_PCH_BPs.png)

### Input Action Data Asset
In the input folder right-click and add a DA as shown below, when you select it you will find the class you made in the list
![DataAsset](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/CreateDA.png)

![DataClass](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/DAtype.png)

once created you can populate the asset with your input actions, don't forget to make one for the sprint.

### Mapping Context
You can adjust the default mapping context and create new ones as needed depending on your project. The important thing to note here is the trigger type.
![Mapping Context](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/Mappingcontext.png)

Going back to the Game Mode, now you have the BP versions of the controller & character you can complete the settings and set the Mode in the project settings.
![GMSettings](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/GameMode%20Settings.png)
![AssigningGM](https://github.com/jayvicks86/UE5InputDemo/blob/main/Images/AssignGameMode.png)

lastly, in your player controller assign the mapping context and input actions DA in the details panel. 

