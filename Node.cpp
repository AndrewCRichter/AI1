//
// Created by Andrew on 11/8/2021.
//

#include "Node.h"

void Node::preActivate(){
    if(!preActive){
        preActive = true;
        network->preActivate(this);
    }
}
void Node::midActivate(){
    preActive = false;

}
void Node::postActivate(){

}
void Node::connect(Node other);