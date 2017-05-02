<?xml version="1.0"?><doc>
<members>
<member name="T:GameTime" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\gametime.h" line="20">
<summary>Class for managing the game's timing values.</summary>
</member>
<member name="M:GameTime.GetTimeElapsed" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\gametime.h" line="31">
<summary>Gets the elapsed time since last frame.
<returns>The amount of time, in seconds, since the last frame.</returns>
</summary>
</member>
<member name="M:GameTime.GetTotalTime" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\gametime.h" line="36">
<summary>Gets the time since the game started.
<returns>The amount of time, in seconds, since the game started.</returns>
</summary>
</member>
<member name="T:Vector2" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="20">
<summary>Class for two-dimensional vectors.</summary>
</member>
<member name="M:Vector2.Length" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="30">
<summary>Used to calculate the length of the vector.
<returns>The length of the vector.</returns>
</summary>
</member>
<member name="M:Vector2.LengthSquared" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="35">
<summary>Used to calculate the squared length of the vector.
<returns>The length of the vector squared.</returns>
</summary>
</member>
<member name="M:Vector2.Set(System.Single!System.Runtime.CompilerServices.IsConst,System.Single!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="41">
<summary>Sets the vector's components.
<param name="x">The new x component.</param>
<param name="y">The new y component.</param>
</summary>
</member>
<member name="M:Vector2.Set(Vector2!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="47">
<summary>Sets the vector's components to match those of another vector.
<param name="vector">The vector whos components to copy.</param>
</summary>
</member>
<member name="M:Vector2.Normalize" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="52">
<summary>Used to resize the vector to a length of one.</summary>
</member>
<member name="M:Vector2.DotProduct(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="56">
<summary>Calculates the dot product between this vector and another.
<param name="v2">A reference to the vector to dot.</param>
<returns>The dot product.</returns>
</summary>
</member>
<member name="M:Vector2.CrossProduct(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="62">
<summary>Calculates the cross product between this vector and another.
<param name="v2">A reference to the vector to cross.</param>
<returns>The cross product.</returns>
</summary>
</member>
<member name="M:Vector2.Zero" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="69">
<summary>A vector with both components set to zero.
<returns>A zero vector.</returns>
</summary>
</member>
<member name="M:Vector2.Distance(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="75">
<summary>Calculates the distance between two vectors.
<param name="v1">A reference to the first vector.</param>
<param name="v2">A reference to the second vector.</param>
<returns>The distance between the vectors.</returns>
</summary>
</member>
<member name="M:Vector2.DistanceSquared(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="82">
<summary>Calculates the squared distance between two vectors.
<param name="v1">A reference to the first vector.</param>
<param name="v2">A reference to the second vector.</param>
<returns>The distance between the vectors squared.</returns>
</summary>
</member>
<member name="M:Vector2.Lerp(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Single)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="90">
<summary>Used to linearly interpolate between two vectors.
<param name="start">The starting vector.</param>
<param name="end">The ending vector.</param>
<param name="value">The interpolation position from 0.0 to 1.0.</param>
<returns>The interpolated vector between start and end.</returns>
</summary>
</member>
<member name="T:InputState" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="24">
<summary>Class that contains the state of various player input
devices. Currently the keyboard, and up to four game pads.
</summary>
</member>
<member name="M:InputState.IsKeyDown(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="39">
<summary>Used to indicate if a key is being held down.
<param name="key">The key to test.</param>
<returns>True if the key is down, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsKeyUp(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="45">
<summary>Used to indicate if a key is not being held down.
<param name="key">The key to test.</param>
<returns>True if the key is up, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsNewKeyPress(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="51">
<summary>Used to indicate if a key has just been released.
<param name="key">The key to test.</param>
<returns>True if the key was just released, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsButtonDown(Buttons,System.Int32*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="58">
<summary>Used to indicate if a button is being held down.
<param name="button">The button to test.</param>
<param name="indexOut">A reference to the controller who's button was held down.</param>
<param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
controllers</param>
<returns>True if the button is down, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsButtonUp(Buttons,System.Int32*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="67">
<summary>Used to indicate if a button is not being pressed.
<param name="button">The button to test.</param>
<param name="indexOut">A reference to the controller who's button was up.</param>
<param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
controllers</param>
<returns>True if the button is up, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.IsNewButtonPress(Buttons,System.Int32*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Int32)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="76">
<summary>Used to indicate if a button has just been released.
<param name="button">The button to test.</param>
<param name="indexOut">A reference to the controller who's button was just
released.</param>
<param name="controllingIndex">The controller index (0-3) to test. Use -1 to test all
controllers</param>
<returns>True if the button was just released, false otherwise.</returns>
</summary>
</member>
<member name="M:InputState.UpdateConfigurationEvent" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="87">
<summary>Handles updating the gamepad configuration.</summary>
</member>
<member name="M:InputState.UpdateAxisEvent(ALLEGRO_EVENT)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="90">
<summary>Handles updating the gamepad axies.</summary>
</member>
<member name="M:InputState.UpdateButtonEvent(ALLEGRO_EVENT,ButtonState)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="93">
<summary>Handles updating the gamepad axies.</summary>
</member>
<member name="M:InputState.GetGamePadIndex(ALLEGRO_JOYSTICK*)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="97">
<summary>Gets the index of a game pad.
<param name="pId">The allegro joystick id.</param>
<returns>The index of a game pad.</returns>
</summary>
</member>
<member name="M:InputState.GetGamePadState(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\inputstate.h" line="103">
<summary>Gets a reference to a specific game pad.
<param name="gamePadIndex">The index of the game pad.</param>
<returns>The reference to the indexed game pad.</returns>
</summary>
</member>
<member name="T:Screen" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="22">
<summary>Abstract base class for all screens.</summary>
</member>
<member name="M:Screen.LoadContent" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="39">
<summary>Used to load the screen's content.</summary>
</member>
<member name="M:Screen.UnloadContent" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="42">
<summary>Used to unload the screen's content.</summary>
</member>
<member name="M:Screen.HandleInput(InputState*)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="45">
<summary>Used to manage what the screen should do based on the user input.
<param name="pInput">A pointer to the input state.</param>
</summary>
</member>
<member name="M:Screen.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="50">
<summary>Used to update the screen.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Screen.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="55">
<summary>Used to reneder the screen.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Screen.UpdateTransition(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="60">
<summary>Used to update the screen's transition values.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:Screen.IsPopup" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="65">
<summary>Used to indicate if the screen has translucency, and the screen below it should
render.
<returns>True if the screen is translucent or has transparency, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.IsExiting" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="71">
<summary>Used to indicate if the screen is exiting.
<returns>True if the screen is exiting, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.IsContentLoaded" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="76">
<summary>Used to indicate if the screen's content has been loaded.
<returns>True if the screen's content has been loaded, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.NeedsToBeRemoved" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="81">
<summary>Used to indicate if the screen should be removed from the screen manager,
because it has fully exited.
<returns>True if the screen's content has been loaded, false otherwise.</returns>
</summary>
</member>
<member name="M:Screen.GetAlpha" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="87">
<summary>Used to indicate the screen's transparency, based on the transition state
<returns>A value between 0.0 and 1.0</returns>
</summary>
</member>
<member name="M:Screen.GetScreenManager" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="92">
<summary>Used to retrieve a pointer to the game's screen manager.
<returns>A pointer to the screen manager.</returns>
</summary>
</member>
<member name="M:Screen.Show" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="97">
<summary>Used to show the screen.</summary>
</member>
<member name="M:Screen.Exit" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\screen.h" line="100">
<summary>Used to exit the screen.</summary>
</member>
<member name="T:MenuItem" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="29">
<summary>Class for selectable menu items.</summary>
</member>
<member name="M:MenuItem.Update(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="44">
<summary>Used to update the item.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:MenuItem.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="49">
<summary>Used to draw the item.
<param name="pGameTime">A pointer to the game's timing values.</param>
</summary>
</member>
<member name="M:MenuItem.Select(MenuScreen*)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="55">
<summary>Used to select the item.
<param name="pMenuScreen">A pointer to the menu that the item belongs to.</param>
</summary>
</member>
<member name="M:MenuItem.SetText(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;!System.Runtime.CompilerServices.IsConst)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="60">
<summary>Sets the display text for the item.
<param name="text">The text that the menu item will display.</param>
</summary>
</member>
<member name="M:MenuItem.IsSelected" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="65">
<summary>Used to indicate if the item is the selected one in the menu.
<returns>True if the item is selected, false otherwise.</returns>
</summary>
</member>
<member name="M:MenuItem.SetSelected(System.Boolean!System.Runtime.CompilerServices.IsConst)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="70">
<summary>Makes this item the selected one in the containing menu.
<param name="isSelected">Whether or not the item is being set as selected or
unselected.</param>
</summary>
</member>
<member name="M:MenuItem.SetFont(ALLEGRO_FONT*)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="76">
<summary>Sets the font for the item text.
<param name="pFont">A pointer to the font that the menu item will use to
display the text.</param>
</summary>
</member>
<member name="M:MenuItem.SetPosition(Vector2!System.Runtime.CompilerServices.IsConst)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="82">
<summary>Sets the position for the item text.
<param name="position">The position on the screen that the menu item text will be
rendered.</param>
</summary>
</member>
<member name="M:MenuItem.SetColor(ALLEGRO_COLOR!System.Runtime.CompilerServices.IsConst)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="88">
<summary>Sets the color for the item text.
<param name="color">The color that the menu item text will be rendered.</param>
</summary>
</member>
<member name="M:MenuItem.SetAlpha(System.Single!System.Runtime.CompilerServices.IsConst)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="93">
<summary>Sets the opacity for the item text.
<param name="alpha">The opacity that the menu item text will be rendered.</param>
</summary>
</member>
<member name="M:MenuItem.SetAlignment(System.Int32!System.Runtime.CompilerServices.IsConst)" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuitem.h" line="98">
<summary>Sets the alignment for the item text.
<param name="alpha">The alignment that the menu item text will be rendered.</param>
</summary>
</member>
<member name="T:MenuScreen" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\menuscreen.h" line="22">
<summary>Base class for all menus.</summary>
</member>
<!-- Discarding badly formed XML document comment for member 'M:MenuScreen.HandleInput(InputState*)'. -->
<!-- Discarding badly formed XML document comment for member 'M:MenuScreen.Draw(GameTime!System.Runtime.CompilerServices.IsConst*)'. -->
<!-- Discarding badly formed XML document comment for member 'M:MenuScreen.SetItemListWrapping(System.Boolean!System.Runtime.CompilerServices.IsConst)'. -->
<member name="T:ScreenManager" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screenmanager.h" line="26">
<summary>Manages the updating, rendering, and player input for open screens.</summary>
</member>
<member name="M:ScreenManager.InTransition" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screenmanager.h" line="36">
<summary>Used to indicate if the game is transitioning between two screens.
<returns>True if the game is transisioning between screens, false otherwise.</returns>
</summary>
</member>
<member name="M:ScreenManager.GetGame" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\screenmanager.h" line="41">
<summary>Used to retrieve a pointer to the current game instance.
<returns>A pointer to the currently running game.</returns>
</summary>
</member>
<member name="M:ScreenManager.AddScreen(Screen*)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\screenmanager.h" line="46">
<summary>Used to add a screen to be managed.
<param name="pScreen">A pointer to the screen that you want to be managed.</param>
</summary>
</member>
<member name="T:Game" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="21">
<summary>Container for the core game components, including:
Timing Values (GameTime), Screen Management (ScreenManager),
and Input Management (InputState).
</summary>
</member>
<member name="M:Game.IsFullScreen" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="32">
<summary>Used to indicate if the game should run in full-screen mode
<returns>True if the game is running full-screen and False if in windowed mode</returns>
</summary>
</member>
<member name="M:Game.GetScreenWidth" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="37">
<summary>Used to indicate the preferred screen width.
<returns>The screen width in pixels.</returns>
</summary>
</member>
<member name="M:Game.GetScreenHeight" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="42">
<summary>Used to indicate the preferred screen height.
<returns>The screen height in pixels.</returns>
</summary>
</member>
<member name="M:Game.GetContentPath(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="47">
<summary>Used to retrieve a game assets full path.
<returns>The path where game assets are stored within the content directory.</returns>
<param name="assetPath">The relative path to the asset.</param>
</summary>
</member>
<member name="M:Game.LoadContent" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="53">
<summary>Used to load the game's content.</summary>
</member>
<member name="M:Game.Update" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="56">
<summary>Used to update the game.</summary>
</member>
<member name="M:Game.Draw" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="59">
<summary>Used to render the game.</summary>
</member>
<member name="M:Game.IsExiting" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="62">
<summary>Used to indicate if the game is exiting.
<returns>True if the game is exiting, false otherwise.</returns>
</summary>
</member>
<member name="M:Game.IsContentLoaded" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="67">
<summary>Used to indicate if the game's content has been loaded.
<returns>True if the game's content has been loaded, false otherwise.</returns>
</summary>
</member>
<member name="M:Game.GetScreenManager" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="72">
<summary>Used to retrieve a pointer to the game's screen manager.
<returns>A pointer to the screen manager.</returns>
</summary>
</member>
<member name="M:Game.Exit" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="77">
<summary>Used to exit the game and quit the application.</summary>
</member>
<member name="M:Game.GetInputState" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\game.h" line="80">
<summary>Used to retrieve a reference to the game's input data.
<returns>A reference to the game's input state.</returns>
</summary>
</member>
</members>
</doc>