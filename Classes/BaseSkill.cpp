#include "BaseSkill.h"

bool BaseSkill::init() {
	if (!Node::init()) {
		return false;
	}
	this->isLocked = true;
	return true;
}