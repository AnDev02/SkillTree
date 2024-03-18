#include "Skill3.h"
#include "SkillFactory.h"

bool Skill3::init() {
	if (!BaseSkill::init()) {
		return false;
	}
	this->skillName = "skill 3";
	this->setSkillSprite(Sprite::create("res/3.png"));
	this->getSkillSprite()->setScale(0.1);
	this->addChild(this->getSkillSprite());
	this->getSkillSprite()->retain();
	this->children.push_back(SkillFactory::createSkill("skill 4"));
	this->unlockScore = 2;

	auto darkLayer = LayerColor::create(Color4B(0, 0, 0, 150)); 
	darkLayer->setContentSize(Size(this->getSkillSprite()->getContentSize().width * 0.1, this->getSkillSprite()->getContentSize().height * 0.1)); // ??t kích th??c tùy thu?c vào kích th??c c?a k? n?ng
	darkLayer->setPosition(Vec2(-(this->getSkillSprite()->getContentSize().width * 0.1) / 2, -(this->getSkillSprite()->getContentSize().height * 0.1) / 2));
	darkLayer->setName("overlay");
	this->addChild(darkLayer);
	return true;
}