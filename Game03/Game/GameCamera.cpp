#include "stdafx.h"
#include "GameCamera.h"

GameCamera::GameCamera() 
{
	//注視点から視点までのベクトルを設定。
	m_toCameraPos.Set(0.0f, 0.0f, 200.0f);

	//カメラのニアクリップとファークリップを設定する。
	g_camera3D->SetNear(1.0f);
	g_camera3D->SetFar(15000.0f);

}

GameCamera::~GameCamera() 
{

}

void GameCamera::Update() 
{
	//注視点の設定
	Vector3 target;
	target.Set(0.0f, 50.0f, 80.0f);

	//カメラの位置も設定する
	Vector3 cameraPos = target + m_toCameraPos;
	
	//メインカメラに注視点と視点を設定する。
	g_camera3D->SetTarget(target);
	g_camera3D->SetPosition(cameraPos);
	
	//カメラの更新。
	g_camera3D->Update();
}
