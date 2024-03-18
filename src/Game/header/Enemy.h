#pragma once
#include "Actor.h"

class Enemy : public Actor
{
public:
	static int NUM_ENEMIES;

	Enemy(Vector position);
	~Enemy() override;
	void update() override;
	void draw() override;
	void drawHPBar();
	
	void setHP(int hp);

	void hit(int damage) override
	{
		health -= damage;
		if (health <= 0) destroy();
	}
	float speed = 75.f;

private:
	int MAX_HEALTH = 100 ;
	int health = MAX_HEALTH;
	Color color = COLOR_RED;
};
extern int NUM_ENEMIES;