#pragma once

#include "Engine/GameEngine.h"

class Foog : public GameObject
{
public:
	//Makes Foog real
	Foog();

	//Functions Overidden from GameObject:
	void draw();
	void update(sf::Time& elapsed);

private:
	sf::Sprite sprite_;
	int fireTimer_ = 0;
};

typedef std::shared_ptr<Foog> FoogPtr;