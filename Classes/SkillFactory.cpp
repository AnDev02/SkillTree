#include "SkillFactory.h"
#include "Skill1.h"
#include "Skill2.h"
#include "Skill3.h"
#include "Skill4.h"

USING_NS_CC;

BaseSkill* SkillFactory::createSkill(std::string skillName) {
	if (skillName == "skill 1") {
		return Skill1::create();
	}
	else if (skillName == "skill 2") {
		return Skill2::create();
	}
	else if (skillName == "skill 3") {
		return Skill3::create();
	}
	else if (skillName == "skill 4") {
		return Skill4::create();
	}
}