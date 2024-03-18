#ifndef __SKILL_FACTORY__
#define __SKILL_FACTORY__
#include "cocos2d.h"
#include "BaseSkill.h"

class SkillFactory
{
public:
    static BaseSkill* createSkill(std::string skillName);
};

#endif // __SKILL_FACTORY__
