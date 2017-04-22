<?xml version="1.0"?><doc>
<members>
<member name="T:GameTime" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gametime.h" line="20">
<summary>Class for managing the game's timing values.</summary>
</member>
<member name="M:GameTime.GetTimeElapsed" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gametime.h" line="31">
<summary>Gets the elapsed time since last frame.
<returns>The amount of time, in seconds, since the last frame.</returns>
</summary>
</member>
<member name="M:GameTime.GetTotalTime" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gametime.h" line="36">
<summary>Gets the time since the game started.
<returns>The amount of time, in seconds, since the game started.</returns>
</summary>
</member>
<member name="T:Vector2" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="20">
<summary>Class for two-dimensional vectors.</summary>
</member>
<member name="M:Vector2.Length" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="30">
<summary>Used to calculate the length of the vector.
<returns>The length of the vector.</returns>
</summary>
</member>
<member name="M:Vector2.LengthSquared" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="35">
<summary>Used to calculate the squared length of the vector.
<returns>The length of the vector squared.</returns>
</summary>
</member>
<member name="M:Vector2.Set(System.Single!System.Runtime.CompilerServices.IsConst,System.Single!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="41">
<summary>Sets the vector's components.
<param name="x">The new x component.</param>
<param name="y">The new y component.</param>
</summary>
</member>
<member name="M:Vector2.Set(Vector2!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="47">
<summary>Sets the vector's components to match those of another vector.
<param name="vector">The vector whos components to copy.</param>
</summary>
</member>
<member name="M:Vector2.Normalize" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="52">
<summary>Used to resize the vector to a length of one.</summary>
</member>
<member name="M:Vector2.DotProduct(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="56">
<summary>Calculates the dot product between this vector and another.
<param name="v2">A reference to the vector to dot.</param>
<returns>The dot product.</returns>
</summary>
</member>
<member name="M:Vector2.CrossProduct(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="62">
<summary>Calculates the cross product between this vector and another.
<param name="v2">A reference to the vector to cross.</param>
<returns>The cross product.</returns>
</summary>
</member>
<member name="M:Vector2.Zero" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="69">
<summary>A vector with both components set to zero.
<returns>A zero vector.</returns>
</summary>
</member>
<member name="M:Vector2.Distance(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="75">
<summary>Calculates the distance between two vectors.
<param name="v1">A reference to the first vector.</param>
<param name="v2">A reference to the second vector.</param>
<returns>The distance between the vectors.</returns>
</summary>
</member>
<member name="M:Vector2.DistanceSquared(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="82">
<summary>Calculates the squared distance between two vectors.
<param name="v1">A reference to the first vector.</param>
<param name="v2">A reference to the second vector.</param>
<returns>The distance between the vectors squared.</returns>
</summary>
</member>
<member name="M:Vector2.Lerp(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Single)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\vector2.h" line="90">
<summary>Used to linearly interpolate between two vectors.
<param name="start">The starting vector.</param>
<param name="end">The ending vector.</param>
<param name="value">The interpolation position from 0.0 to 1.0.</param>
<returns>The interpolated vector between start and end.</returns>
</summary>
</member>
<member name="T:InputState" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="24">
<summary>Class that contains the state of various player input
devices. Currently the keyboard, and up to four game pads.
</summary>
</member>
<member name="M:InputState.IsKeyDown(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="39">
<summary>Used to indicate if a key is being held down.
<param name="key">The key to test.</param>
<returns>True if the key is down, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsKeyUp(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="45">
<summary>Used to indicate if a key is not being held down.
<param name="key">The key to test.</param>
<returns>True if the key is up, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsNewKeyPress(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="51">
<summary>Used to indicate if a key has just been released.
<param name="key">The key to test.</param>
<returns>True if the key was just released, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsButtonDown(Buttons,System.Int32*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="58">
<summary>Used to indicate if a button is being held down.
<param name="button">The button to test.</param>
<param name="indexOut">A reference to the controller who's button was held down.</param>
<param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
controllers</param>
<returns>True if the button is down, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsButtonUp(Buttons,System.Int32*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="67">
<summary>Used to indicate if a button is not being pressed.
<param name="button">The button to test.</param>
<param name="indexOut">A reference to the controller who's button was up.</param>
<param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
controllers</param>
<returns>True if the button is up, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsNewButtonPress(Buttons,System.Int32*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="76">
<summary>Used to indicate if a button has just been released.
<param name="button">The button to test.</param>
<param name="indexOut">A reference to the controller who's button was just
released.</param>
<param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
controllers</param>
<returns>True if the button was just released, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.UpdateConfigurationEvent" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="87">
<summary>Handles updating the gamepad configuration.</summary>
</member>
<member name="M:InputState.UpdateAxisEvent(ALLEGRO_EVENT)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="90">
<summary>Handles updating the gamepad axies.</summary>
</member>
<member name="M:InputState.UpdateButtonEvent(ALLEGRO_EVENT,ButtonState)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="93">
<summary>Handles updating the gamepad axies.</summary>
</member>
<member name="M:InputState.GetGamePadIndex(ALLEGRO_JOYSTICK*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="97">
<summary>Gets the index of a game pad.
<param name="pId">The allegro joystick id.</param>
<returns>The index of a game pad.</returns>
</summary>
</member>
<member name="M:InputState.GetGamePadState(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\inputstate.h" line="103">
<summary>Gets a reference to a specific game pad.
<param name="gamePadIndex">The index of the game pad.</param>
<returns>The reference to the indexed game pad.</returns>
</summary>
</member>
<member name="T:Screen" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="22">
<summary>Abstract base class for all screens.</summary>
</member>
<member name="M:Screen.LoadContent" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="39">
<summary>Used to load the screen's content.</summary>
</member>
<member name="M:Screen.UnloadContent" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="42">
<summary>Used to unload the screen's content.</summary>
</member>
<member name="M:Screen.HandleInput(InputState*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="45">
<summary>Used to manage what the screen should do based on the user input.
<param name="pInput">A pointer to the input state.</param>
</summary>
</member>
<member name="M:Screen.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="50">
<summary>Used to update the screen.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Screen.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="55">
<summary>Used to reneder the screen.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Screen.UpdateTransition(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="60">
<summary>Used to update the screen's transition values.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Screen.IsPopup" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="65">
<summary>Used to indicate if the screen has translucency, and the screen below it should
render.
<returns>True if the screen is translucent or has transparency, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.IsExiting" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="71">
<summary>Used to indicate if the screen is exiting.
<returns>True if the screen is exiting, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.IsContentLoaded" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="76">
<summary>Used to indicate if the screen's content has been loaded.
<returns>True if the screen's content has been loaded, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.NeedsToBeRemoved" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="81">
<summary>Used to indicate if the screen should be removed from the screen manager,
because it has fully exited.
<returns>True if the screen's content has been loaded, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.GetAlpha" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="87">
<summary>Used to indicate the screen's transparency, based on the transition state
<returns>A value between 0.0 and 1.0</returns>
</summary>
</member>
<member name="M:Screen.GetScreenManager" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="92">
<summary>Used to retrieve a pointer to the game's screen manager.
<returns>A pointer to the screen manager.</returns>
</summary>
</member>
<member name="M:Screen.Show" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="97">
<summary>Used to show the screen.</summary>
</member>
<member name="M:Screen.Exit" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screen.h" line="100">
<summary>Used to exit the screen.</summary>
</member>
<member name="T:ScreenManager" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screenmanager.h" line="26">
<summary>Manages the updating, rendering, and player input for open screens.</summary>
</member>
<member name="M:ScreenManager.InTransition" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screenmanager.h" line="36">
<summary>Used to indicate if the game is transitioning between two screens.
<returns>True if the game is transisioning between screens, false otherwise.</returns>
</summary>
</member>
<member name="M:ScreenManager.GetGame" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screenmanager.h" line="41">
<summary>Used to retrieve a pointer to the current game instance.
<returns>A pointer to the currently running game.</returns>
</summary>
</member>
<member name="M:ScreenManager.AddScreen(Screen*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\screenmanager.h" line="46">
<summary>Used to add a screen to be managed.
<param name="pScreen">A pointer to the screen that you want to be managed.</param>
</summary>
</member>
<member name="T:Game" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="21">
<summary>Container for the core game components, including:
Timing Values (GameTime), Screen Management (ScreenManager),
and Input Management (InputState).
</summary>
</member>
<member name="M:Game.IsFullScreen" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="32">
<summary>Used to indicate if the game should run in full-screen mode
<returns>True if the game is running full-screen and False if in windowed mode</returns>
</summary>
</member>
<member name="M:Game.GetScreenWidth" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="37">
<summary>Used to indicate the preferred screen width.
<returns>The screen width in pixels.</returns>
</summary>
</member>
<member name="M:Game.GetScreenHeight" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="42">
<summary>Used to indicate the preferred screen height.
<returns>The screen height in pixels.</returns>
</summary>
</member>
<member name="M:Game.GetContentPath(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="47">
<summary>Used to retrieve a game assets full path.
<returns>The path where game assets are stored within the content directory.</returns>
<param name="assetPath">The relative path to the asset.</param>
</summary>
</member>
<member name="M:Game.LoadContent" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="53">
<summary>Used to load the game's content.</summary>
</member>
<member name="M:Game.Update" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="56">
<summary>Used to update the game.</summary>
</member>
<member name="M:Game.Draw" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="59">
<summary>Used to render the game.</summary>
</member>
<member name="M:Game.IsExiting" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="62">
<summary>Used to indicate if the game is exiting.
<returns>True if the game is exiting, false otherwise.</returns>
</summary>
</member>
<member name="M:Game.IsContentLoaded" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="67">
<summary>Used to indicate if the game's content has been loaded.
<returns>True if the game's content has been loaded, false otherwise.</returns>
</summary>
</member>
<member name="M:Game.GetScreenManager" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="72">
<summary>Used to retrieve a pointer to the game's screen manager.
<returns>A pointer to the screen manager.</returns>
</summary>
</member>
<member name="M:Game.Exit" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="77">
<summary>Used to exit the game and quit the application.</summary>
</member>
<member name="M:Game.GetInputState" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\game.h" line="80">
<summary>Used to retrieve a reference to the game's input data.
<returns>A reference to the game's input state.</returns>
</summary>
</member>
<member name="T:GameObject" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="23">
<summary>Abstract base class for all game objects.</summary>
</member>
<member name="M:GameObject.SetCurrentLevel(Level*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="40">
<summary>Sets a static reference to the currently loaded level.
<returns>A pointer to the current level object.</returns>
</summary>
</member>
<member name="M:GameObject.AreObjectsColliding(GameObject*,GameObject*,GameObject.CollisionData*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="45">
<summary>Used to determine if two game objects are colliding.
<param name="gameObject1">A pointer to the first game object.</param>
<param name="gameObject2">A pointer to the second game object.</param>
<param name="pGameTime">A pointer to the collision data struct which contains
details about the collision.</param>
<returns>True if the game objects are colliding, false otherwise.</returns>
</summary>
</member>
<member name="M:GameObject.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="54">
<summary>Used to update the game object.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:GameObject.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="59">
<summary>Used to reneder the game object.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:GameObject.IsActive" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="64">
<summary>Used to indicate if the game object is active.
<returns>True if the game object is active, false otherwise.</returns>
</summary>
</member>
<member name="M:GameObject.Activate" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="69">
<summary>Activates the game object.</summary>
</member>
<member name="M:GameObject.Deactivate" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="72">
<summary>Deactivates the game object.</summary>
</member>
<member name="M:GameObject.GetPosition" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="75">
<summary>Gets a reference to the game object's position.</summary>
</member>
<member name="M:GameObject.ToString" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="78">
<summary>Gets a string representation of the game object.
<returns>The game object's string representation.</returns>
</summary>
</member>
<member name="M:GameObject.GetHalfDimensions" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="83">
<summary>Gets the half-width and half-height of the game object.
<returns>The half dimensions of the game object.</returns>
</summary>
</member>
<member name="M:GameObject.GetIndex" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\gameobject.h" line="88">
<summary>Gets the index of the game object for debugging purposes.
<returns>The game object's index.</returns>
</summary>
</member>
<member name="T:Bullet" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\bullet.h" line="19">
<summary>Class for bullet objects.</summary>
</member>
<member name="M:Bullet.SetTexture(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\bullet.h" line="27">
<summary>Sets the shared texture of all bullets.
<param name="assetPath">The location of the asset within the content folder.</param>
</summary>
</member>
<member name="M:Bullet.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\bullet.h" line="32">
<summary>Used to update the screen.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Bullet.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\bullet.h" line="37">
<summary>Used to reneder the bullet.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Bullet.Activate(Vector2,System.Boolean)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\bullet.h" line="42">
<summary>Activates the bullet.
<param name="position">The position where the bullet should start.</param>
<param name="isShotByPlayer">Specifies if the player ship shot the bullet.</param>
</summary>
</member>
<member name="M:Bullet.GetDamage" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\bullet.h" line="48">
<summary>Gets the dammage that the bullet inflicts.
<returns>The damage value that the bullet inflicts.</returns>
</summary>
</member>
<member name="M:Bullet.ToString" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\bullet.h" line="53">
<summary>Gets a string representation of the game object.
<returns>The game object's string representation.</returns>
</summary>
</member>
<member name="T:Ship" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="20">
<summary>Abstract base class for all ships.</summary>
</member>
<member name="M:Ship.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="30">
<summary>Used to update the ship.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Ship.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="35">
<summary>Used to reneder the ship.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Ship.Fire" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="40">
<summary>Used to make the ship fire it's weapon.</summary>
</member>
<member name="M:Ship.SetBulletPool(std.vector&lt;Bullet**,std.allocator&lt;Bullet**&gt;&gt;*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="43">
<summary>Sets the pool from where the bullets can be reused, when firing.
<param name="pBullets">A vector of bullet poiners that can be reused.</param>
</summary>
</member>
<member name="M:Ship.Hit(System.Single!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="48">
<summary>Used to inflict damage when a ship is hit.
<param name="damage">A the amount of damage to inflict.</param>
</summary>
</member>
<member name="M:Ship.IsInvulnurable" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="53">
<summary>Used to indicate if a ship can take damage.
<returns>True if the ship is invulnurable (cannot take damage), false otherwise.</returns>
</summary>
</member>
<member name="M:Ship.ToString" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\ship.h" line="58">
<summary>Gets a string representation of the game object.
<returns>The game object's string representation.</returns>
</summary>
</member>
<member name="T:PlayerShip" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="18">
<summary>Class for the player controlled ship.</summary>
</member>
<member name="M:PlayerShip.SetTexture(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="28">
<summary>Sets static texture for the player ship.
<param name="assetPath">The location of the asset within the content folder.</param>
</summary>
</member>
<member name="M:PlayerShip.HandleInput(InputState*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="33">
<summary>Used to manage what the player ship should do based on the user input.
<param name="pInput">A pointer to the input state.</param>
</summary>
</member>
<member name="M:PlayerShip.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="38">
<summary>Used to update the player ship.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:PlayerShip.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="43">
<summary>Used to reneder the player ship.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:PlayerShip.Fire" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="48">
<summary>Used to make the player ship fire it's weapon.</summary>
</member>
<member name="M:PlayerShip.CanFire" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="51">
<summary>Used to indicate if the player ship is ready to fire.
<returns>True if the ship is ready to fire, false otherwise.</returns>
</summary>
</member>
<member name="M:PlayerShip.ToString" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="56">
<summary>Gets a string representation of the game object.
<returns>The game object's string representation.</returns>
</summary>
</member>
<member name="M:PlayerShip.GetHalfDimensions" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\playership.h" line="61">
<summary>Gets the half-width and half-height of the game object.
<returns>The half dimensions of the game object.</returns>
</summary>
</member>
<member name="T:Level" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="24">
<summary>The abstract base class for all levels.</summary>
</member>
<member name="M:Level.GetCurrentLevel" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="34">
<summary>Used to get a static pointer to the current level.</summary>
</member>
<member name="M:Level.LoadContent" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="37">
<summary>Used to load the screen's content.</summary>
</member>
<member name="M:Level.UnloadContent" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="40">
<summary>Used to unload the screen's content.</summary>
</member>
<member name="M:Level.InitializeEnemies" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="43">
<summary>Used to setup the enemies at the beginning of the level.</summary>
</member>
<member name="M:Level.HandleInput(InputState*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="46">
<summary>Used to manage what the level should do based on the user input.
<param name="pInput">A pointer to the input state.</param>
</summary>
</member>
<member name="M:Level.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="51">
<summary>Used to update the level.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Level.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="56">
<summary>Used to render the level.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Level.AddGameObject(GameObject*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="61">
<summary>Adds a game object to be managed by the level.
<param name="pGameObject">A pointer to the game object that will be managed.</param>
</summary>
</member>
<member name="M:Level.UpdateSectorPosition(GameObject*)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\level.h" line="66">
<summary>Calculates and adds a game object to it's current sector.
<param name="pGameObject">A pointer to the game object that will have its
sector position updated.</param>
</summary>
</member>
<member name="T:EnemyShip" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\enemyship.h" line="18">
<summary>Abstract class for all enemy ships.</summary>
</member>
<member name="M:EnemyShip.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\enemyship.h" line="28">
<summary>Used to reneder the enemy.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:EnemyShip.Initialize(Vector2!System.Runtime.CompilerServices.IsConst,System.Double!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\enemyship.h" line="33">
<summary>Initializes the enemy ship.
<param name="position">Position where the enemy ship will start from.</param>
<param name="delaySeconds">Time that the enemy will wait before becoming active.</param>
</summary>
</member>
<member name="M:EnemyShip.Fire" decl="true" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\enemyship.h" line="39">
<summary>Used to make the enemy ship fire it's weapon.</summary>
</member>
<member name="M:EnemyShip.GetDelaySeconds" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\enemyship.h" line="42">
<summary>Gets the time that an enemy should wait off screen, before activating.
<returns>The time in seconds that the enemy will delay before activating.</returns>
</summary>
</member>
<member name="M:EnemyShip.ToString" decl="false" source="c:\users\ryan appel\desktop\spacefighter\spacefighter\enemyship.h" line="47">
<summary>Gets a string representation of the game object.
<returns>The game object's string representation.</returns>
</summary>
</member>
</members>
</doc>