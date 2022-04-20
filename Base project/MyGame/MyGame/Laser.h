#pragma once

#include "Engine/GameEngine.h"

class Laser : public GameObject
{
public: 
	//Makes laser 
	Laser(sf::Vector2f pos);

	//functions overidden from GameObject:
	void draw();
	void update(sf::Time& elapsed);
private: 
	sf::Sprite sprite_;

};
typedef std::shared_ptr<Laser> LaserPtr;