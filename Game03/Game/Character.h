#pragma once

enum CharacterID {
	ID_MAIN = 0,
	ID_HEICHON = 1,
	ID_ROSROHA = 2,
	ID_HIRU = 3,
};

class Character : public IGameObject
{
public:
	Character(int id);
	~Character();

	void Update();

	void Move();

	//値を見せるためようのゲッター
	int GetID()const { return id; } //自分の値を返す
	
private:
	int id;

};

