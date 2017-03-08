/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Main.cpp: Entry point of application and handles
 initialization of the game.

 NOTE: Space Fighter Game is a basic game created
 for Fox Valley Technical College's students and
 instructors for educational purposes only. It is
 based on an engine built prior to this
 educational version. 

------------------------------------------------- */


#include <allegro5\allegro.h>
#include <allegro5\allegro_native_dialog.h>

#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <allegro5\allegro_image.h>

#include <iostream>

#include "Game.h"

int main(int argc, char *argv[])
{
	const char errorType[] = "Initialization Error";
	const int flags = ALLEGRO_MESSAGEBOX_ERROR;

	// Initialize Allegro
	if (!al_init())
	{
		const char message[] = "Failed to initialize Allegro Library.";
		al_show_native_message_box(nullptr, "Error", errorType, message, nullptr, flags);
		return -1;
	}

	Game game;

	// Initialize a new window for gameplay.
	
	int screenWidth = Game::GetScreenWidth();
	int screenHeight = Game::GetScreenHeight();

	if (Game::IsFullScreen()) al_set_new_display_flags(ALLEGRO_FULLSCREEN);

	ALLEGRO_DISPLAY *pDisplay = al_create_display(screenWidth, screenHeight);
	if (!pDisplay)
	{
		const char message[] = "Failed to initialize display.";
		al_show_native_message_box(nullptr, "Error", errorType, message, nullptr, flags);
		return -1;
	}

	al_set_window_title(pDisplay, "C++ Space Shooter");
	al_set_blender(ALLEGRO_ADD, ALLEGRO_ALPHA, ALLEGRO_INVERSE_ALPHA);
	
	// Initialize Allegro addons
	al_init_font_addon();
	al_init_ttf_addon();
	al_init_image_addon();

	std::string fontPath = Game::GetContentPath("Fonts\\arial.ttf");
	ALLEGRO_FONT *pFont = al_load_ttf_font(fontPath.c_str(), 12, 0);
	
	double targetFramesPerSec = 60.0;
	double actualFramesPerSec = 0.0;

	double currTime;
	double prevTime = al_get_time();

	float frameCounter = 0;

	bool redraw = true;

	// Create and register events
	ALLEGRO_EVENT_QUEUE *pEventQueue = al_create_event_queue();
	ALLEGRO_TIMER *pTimer = al_create_timer(1.0 / targetFramesPerSec);

	al_register_event_source(pEventQueue, al_get_timer_event_source(pTimer));
	al_register_event_source(pEventQueue, al_get_display_event_source(pDisplay));
	al_register_event_source(pEventQueue, al_get_joystick_event_source());

	game.LoadContent();
	
	al_start_timer(pTimer);
	while (!game.IsExiting())
	{
		ALLEGRO_EVENT alEvent;

		al_wait_for_event(pEventQueue, &alEvent);

		switch (alEvent.type)
		{
		case ALLEGRO_EVENT_DISPLAY_CLOSE:
			game.Exit();
			break;

		case ALLEGRO_EVENT_TIMER:
			game.Update();
			redraw = true;
			break;

		case ALLEGRO_EVENT_JOYSTICK_CONFIGURATION:
			game.GetInputState().UpdateConfigurationEvent();
			break;
			
		case ALLEGRO_EVENT_JOYSTICK_AXIS:
			game.GetInputState().UpdateAxisEvent(alEvent);
			break;
		case ALLEGRO_EVENT_JOYSTICK_BUTTON_UP:
			game.GetInputState().UpdateButtonEvent(alEvent, BUTTONSTATE_RELEASED);
			break;
		case ALLEGRO_EVENT_JOYSTICK_BUTTON_DOWN:
			game.GetInputState().UpdateButtonEvent(alEvent, BUTTONSTATE_PRESSED);
			break;
		}

		if (redraw && al_event_queue_is_empty(pEventQueue))
		{
			redraw = false;

			al_clear_to_color(al_map_rgb(0, 0, 0));
			
			game.Draw();			

			// Display/hide frame rate
			bool showFramesPerSec = true;
			if (showFramesPerSec)
			{
				if (pFont)
				{
					al_draw_textf(pFont, al_map_rgb(255, 255, 255), 10, 10, ALLEGRO_ALIGN_LEFT, "FPS: %.2f", (float)actualFramesPerSec);
				}
				else
				{
					std::cout << "FPS: " << actualFramesPerSec << std::endl;
				}
			}

			al_flip_display();

			currTime = al_get_time();

			if (currTime - prevTime >= 1.0)
			{
				actualFramesPerSec = frameCounter / (currTime - prevTime);
				frameCounter = 0;
				prevTime = currTime;
			}

			frameCounter++;
		}
	}
	
	al_destroy_display(pDisplay);

	return 0;
}
