#include "stdafx.h"
#include "Game.h"
#include "Stage.h"
#include "GameCamera.h"

Game::Game() 
{
	//背景を出す
	stage = NewGO<Stage>(0, "stage");
	//カメラを出す
	gameCamera = NewGO<GameCamera>(0, "gameCamera");
}

Game::~Game() 
{

}

void Game::Update()
{
	
}

