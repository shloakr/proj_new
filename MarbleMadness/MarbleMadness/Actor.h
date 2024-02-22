#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"

// Base class for all actors
class Actor : public GraphObject {
public:
    Actor(int imageID, double startX, double startY, Direction dir = right, int depth = 0)
        : GraphObject(imageID, startX, startY, dir, depth) {
        setVisible(true); // Make the actor visible by default
    }

    virtual void doSomething() = 0; // Pure virtual function to make Actor an abstract class

    // You can add other common functionalities of actors here
    // For example, isAlive(), setDead(), etc.
};

// Wall class derived from Actor
class Wall : public Actor {
public:
    Wall(double startX, double startY)
        : Actor(IID_WALL, startX, startY, none, 2) {
        // Initialization specific to Wall can be added here
    }

    virtual void doSomething() override {
        // Walls do nothing each tick
    }
};

// Avatar class derived from Actor
class Avatar : public Actor {
public:
    Avatar(double startX, double startY)
        : Actor(IID_PLAYER, startX, startY, right, 0) {
        // Initialization specific to Avatar can be added here
    }

    virtual void doSomething() override {
        // Implement avatar's actions based on user input here
        // This part needs to handle directional keys and update Avatar's position
    }
};

#endif // ACTOR_H_
