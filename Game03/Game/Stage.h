#pragma once

class Stage :public IGameObject
{
public:
	Stage();
	~Stage();

	void Update();

	void Render(RenderContext& rc);

private:
	ModelRender stageModelRender;
	PhysicsStaticObject physicsStaticObject;
};

