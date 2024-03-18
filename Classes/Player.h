#ifndef __PLAYER__
#define __PLAYER__

#include "cocos2d.h"
#include "BaseSkill.h"
#include "SkillFactory.h"
USING_NS_CC;
class Player : public cocos2d::Node
{
public:
	static Player* createPlayer();
	virtual bool init() {
		if (!Node::init()) return false;
		return true;
	}
	void increaseSkillPoint(int pnt) {
		this->skillPoint += pnt;
	};
	void decreaseSkillPoint(int pnt) {
		this->skillPoint -= pnt;
	};
	int getSkillPoint() const { return skillPoint; };
	std::vector<BaseSkill* > listSkill;
	void addSkill(std::string skillName) {
		listSkill.push_back(SkillFactory::createSkill(skillName));
	}
	CREATE_FUNC(Player);
private:
	int skillPoint;
	
};

#endif // __PLAYER__
