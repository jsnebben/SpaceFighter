/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 Game.cpp: Source file for the game.

------------------------------------------------- */


#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>

#include "Game.h"

#include "GameObject.h"
#include "MainMenuScreen.h"

std::string Game::s_contentDirectory;
ALLEGRO_DISPLAY_MODE Game::s_displayMode;

Game::Game()
{
	m_isExiting = false;
	
	m_pScreenManager = new ScreenManager(this);

	m_isContentLoaded = false;

	al_get_display_mode(al_get_num_display_modes() - 1, &s_displayMode);

	SetContentPath("Content");
}

void Game::LoadContent()
{
	m_pScreenManager->AddScreen(new MainMenuScreen());
	
	m_isContentLoaded = true;
}

void Game::Update()
{
	if (m_isContentLoaded)
	{
		m_gameTime.Update();
		m_input.Update();

		m_pScreenManager->HandleInput(&m_input);
		m_pScreenManager->Update(&m_gameTime);
	}
}

void Game::Draw() 
{
	if (m_isContentLoaded)
	{
		m_pScreenManager->Draw(&m_gameTime);
	}
}

void Game::SetContentPath(const char *pFolder)
{
	ALLEGRO_PATH * path = al_get_standard_path(ALLEGRO_RESOURCES_PATH);
	al_replace_path_component(path, -1, "SpaceFighter");

	s_contentDirectory = al_path_cstr(path, '\\');
	s_contentDirectory.append(pFolder);
	s_contentDirectory.append("\\");
}