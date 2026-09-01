#pragma once

class Player;
class Stage;
class GameCamera;

class Game : public IGameObject
{
public:
	Game();
	~Game();
	void Update();
	

private:
	Vector3 m_pos;
	Stage* stage = nullptr;
	GameCamera* gameCamera = nullptr;
};

