//
// Created by Andrew on 11/8/2021.
//

#ifndef AI1_NETWORK_H
#define AI1_NETWORK_H

#include "Node.h"

class Network {
private:
    std::vector<Node> nodes;
    std::vector<Node> active;
    std::vector<Node> preActive;
    std::vector<double> setPosition;
    int state;
public:
    void preActivate(Node node);
};


#endif //AI1_NETWORK_H
