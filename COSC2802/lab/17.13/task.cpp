#include "task.h"

Location::Location(int x, int y) {
	this->x = x;
	this->y = y;
}

bool Location::operator==(const Location& other){ 
	if (this->x == other.x && this->y == other.y) {
		return true;
	} else {
		return false;
	}
}

void Location::setX(int x) {
	this->x = x;
}

void Location::setY(int y) {
	this->y = y;
}

int Location::getX(){
	return this->x;
}

int Location::getY() {
	return this-> y;
}
