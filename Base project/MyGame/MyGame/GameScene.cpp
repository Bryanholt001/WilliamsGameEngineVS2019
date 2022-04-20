#include "GameScene.h"
#include "Foog.h"
#include "MeteorSpawner.h"

GameScene::GameScene()
{
	FoogPtr foog = std::make_shared<Foog>();
	addGameObject(foog);

	MeteorSpawnerPtr meteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(meteorSpawner);
}
