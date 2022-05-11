//
// Created by Andrew on 11/8/2021.
//

#ifndef AI1_NODE_H
#define AI1_NODE_H

#include "Signal.h"
#include "Network.h"

struct connection{
    Node* next;
    double strength;
};

class Node {
private:
    std::vector<double> affiliations;
    std::vector<connection> progressing;
    std::vector<connection> regressing;
    std::vector<connection> inverting;
    std::vector<connection> reverting;
    std::vector<Signal> inputs;
    Signal current;
    Signal trace;
    Network* network;
    bool preActive;
    int lastActivation;
public:
    void preActivate();
    void midActivate();
    void postActivate();
    void connect(Node other);
};


#endif //AI1_NODE_H
