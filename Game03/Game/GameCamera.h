#pragma once

class Player;

class GameCamera :public IGameObject
{
public:
	GameCamera();
	~GameCamera();

	void Update() override;

private:
	Player* m_player;	//プレイヤー。
	Vector3 m_toCameraPos = { 0.0f, 0.0f, 0.0f };	//注視点から視点に向かうベクトル。

};

