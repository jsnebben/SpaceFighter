/* ------------------------------------------------
	
				Space Fighter Game
	
					Ryan Appel
					 9/17/14


 GameplayScreen.cpp: Source file for the game's
 main events.

------------------------------------------------- */


#include "GameplayScreen.h"

#include "PauseScreen.h"
#include "Game.h"
#include "PlayerShip.h"
#include "Bullet.h"
#include "Level_1.h"


GameplayScreen::GameplayScreen()
{
	SetFadeInTime(1.0);
	SetFadeOutTime(1.0);

	m_pLevel = new Level_1;
}

GameplayScreen::~GameplayScreen()
{
	delete m_pLevel;
}

void GameplayScreen::LoadContent()
{
	// Load Static Content
	PlayerShip::SetTexture("Textures\\PlayerShip.png");
	Bullet::SetTexture("Textures\\Bullet.png");
	SmallBioEnemy::SetTexture("Textures\\BioEnemySmall.png");
	

	m_pLevel->LoadContent();
	
	Screen::LoadContent();

	Show();
}

void GameplayScreen::UnloadContent()
{
	if (IsContentLoaded())
	{
		m_pLevel->UnloadContent();

		Screen::UnloadContent();
	}
}

void GameplayScreen::HandleInput(InputState *pInput)
{
	if (pInput->IsNewKeyPress(ALLEGRO_KEY_ESCAPE))
	{
		m_pScreenManager->AddScreen(new PauseScreen());
	}

	m_pLevel->HandleInput(pInput);
}

void GameplayScreen::Update(const GameTime *pGameTime)
{
	if (!this->NeedsToBeRemoved())
	{
		m_pLevel->Update(pGameTime);
	}
}

void GameplayScreen::Draw(const GameTime *pGameTime)
{
	if (!this->NeedsToBeRemoved())
	{
		m_pLevel->Draw(pGameTime);
	}
}