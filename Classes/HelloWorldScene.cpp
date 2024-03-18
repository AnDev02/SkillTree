#include "HelloWorldScene.h"
#include "SkillTree.h"
#include "Player.h"
USING_NS_CC;

Scene* HelloWorld::createScene()
{
    return HelloWorld::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    auto player = Player::createPlayer();
    player->increaseSkillPoint(100);
    player->retain();
    auto skillTree = SkillTree::createSkillTree(player);
    skillTree->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 1.5));
    this->addChild(skillTree);
    
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();
}
