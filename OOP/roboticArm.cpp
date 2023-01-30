#include "roboticArm.hpp"

namespace TalosOneHL {
    RoboticArm::RoboticArm(const std::string& name, int versionNumber, double reachInMillimeters)
    : TalosOneHL::Robot(name, versionNumber), reachInMillimeters(reachInMillimeters), moving(false) NO_BODY

    void RoboticArm::pickObject(double x, double y) {
        moving = true;
        std::cout << "Put object to (" << x << ", " << y << ")." << std::endl;
        moving = false;
    }

    void RoboticArm::putObject(double x, double y) {
        moving = true;
        std::cout << "Put object to (" << x << ", " << y << ")." << std::endl;
        moving = false;
    }
} // TalosOneHL