#include "stdafx.h"
#include "Stage.h"

Stage::Stage() 
{

	stageModelRender.Init("Assets/assetsData/kariStage.tkm");
	stageModelRender.Update();

	physicsStaticObject.CreateFromModel(stageModelRender.GetModel(), stageModelRender.GetModel().GetWorldMatrix());

}

Stage::~Stage() 
{
}

void Stage::Update() 
{
}

void Stage::Render(RenderContext& rc) 
{
	stageModelRender.Draw(rc);
}