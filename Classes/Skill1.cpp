#include "Skill1.h"
#include "SkillFactory.h"
bool Skill1::init() {
	if (!BaseSkill::init()) {
		return false;
	}
	this->setSkillSprite(Sprite::create("res/1.png"));
	this->getSkillSprite()->setScale(0.1);
	this->getSkillSprite()->retain();
	this->addChild(this->getSkillSprite());
	this->parent = nullptr;
	
	this->children.push_back(SkillFactory::createSkill("skill 2"));
	this->children.push_back(SkillFactory::createSkill("skill 3"));
	this->unlock();
	this->skillName = "skill 1";
	return true;
}