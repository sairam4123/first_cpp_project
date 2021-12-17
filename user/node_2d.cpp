//
// Created by Sairam on 10-12-2021.
//

#include "node_2d.h"
#include "iostream"

void Node2D::_ready() {
    std::cout << name->c_str() << " is ready." << std::endl;
}

void Node2D::_exit() {
    std::cout << "exiting!" << std::endl;
}

void Node2D::_loop(const float delta) {
    x += 1*delta;
    std::cout << x << std::endl;
    if (x >= 0.5) {
        MainLoop::get_singleton()->exit();
    }
}
