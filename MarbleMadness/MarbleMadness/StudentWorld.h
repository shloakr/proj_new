#ifndef STUDENTWORLD_H_
#define STUDENTWORLD_H_

#include "GameWorld.h"
#include <vector>

// Forward declaration
class Actor;

// The StudentWorld class is responsible for managing all game actors and the game environment
class StudentWorld : public GameWorld {
public:
    StudentWorld(std::string assetDir) : GameWorld(assetDir) {}

    virtual int init() override;
    virtual int move() override;
    virtual void cleanUp() override;

    // Additional methods to manage actors can be added here
    // For example, addActor(), removeDeadActors(), etc.

private:
    std::vector<Actor*> actors; // Container for all actors in the game, including the Avatar
    Actor* player; // Pointer to the Avatar object
};

#endif // STUDENTWORLD_H_
