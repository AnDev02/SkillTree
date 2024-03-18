#ifndef __BASE_SKILL__
#define __BASE_SKILL__

#include "cocos2d.h"
USING_NS_CC;
class BaseSkill : public cocos2d::Node
{
public:
    std::string getSkillName() const { return skillName; };
    std::vector<BaseSkill*> children;
    BaseSkill* parent;
    virtual bool init();
    void setSkillSprite(Sprite* spr) { skillSprite = spr; };
    Sprite* getSkillSprite() const { return this->skillSprite; };
    int getUnlockScore() const { return this->unlockScore; };
    void unlock() { 
        if (isLocked) {
            isLocked = false;
            this->removeChildByName("overlay");
        }
    /*...*/ };
    bool isLock() const { return isLocked; };
    CREATE_FUNC(BaseSkill);
private: 
    Sprite* skillSprite;
    bool isLocked = true;
protected:
    int unlockScore;
    std::string skillName;
};

#endif // __BASE_SKILL__
