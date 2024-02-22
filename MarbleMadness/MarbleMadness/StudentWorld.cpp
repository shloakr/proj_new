#include "StudentWorld.h"

StudentWorld::StudentWorld(std::string assetPath)
: GameWorld(assetPath), player(nullptr) {
}

StudentWorld::~StudentWorld() {
    cleanUp();
}

int StudentWorld::init() {
    // Initialize the player and walls based on the level data
    // For example, player = new Avatar(startX, startY);
    // Add walls to the actors vector
    return GWSTATUS_CONTINUE_GAME;
}

int StudentWorld::move() {
    // Give each actor a chance to do something
    for (auto actor : actors) {
        actor->doSomething();
    }
    
    // Check for game over or level completion conditions
    // For now, just return continue
    return GWSTATUS_CONTINUE_GAME;
}

void StudentWorld::cleanUp() {
    // Delete all dynamically allocated actors
    for (auto actor : actors) {
        delete actor;
    }
    actors.clear();
    
    // Delete the player
    if (player != nullptr) {
        delete player;
        player = nullptr;
    }
}
