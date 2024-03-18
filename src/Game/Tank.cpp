#include "Tank.h"
#include "Game.h"
#include "Engine/TinyEngine.h"

Tank::Tank(Vector position)
	: Enemy(position)
{
	NUM_ENEMIES++;
	collision_channel = Collision_Channel::Enemy;

	Actor::changeColor(COLOR_VIOLET);
	Actor::changeSize(Vector(40.f, 40.f));
	Enemy::setHP(500);
	Enemy::speed = 50;
}