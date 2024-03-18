#ifndef __SKILL_TREE__
#define __SKILL_TREE__

#include "cocos2d.h"
#include "BaseSkill.h"
#include "SkillFactory.h"
USING_NS_CC;
class Player;
class SkillTree : public cocos2d::Node
{
public:
	static SkillTree* createSkillTree(Player* player);
	BaseSkill* skillRoot;
	virtual bool init(Player* player);
	void drawTree(BaseSkill* node, Vec2 position, float xSpacing, float ySpacing, BaseSkill* parent);
	~SkillTree();
private:
	std::vector<Node*> skillRects;
	Label* moneyLabel;
};

#endif // __SKILL_TREE__
