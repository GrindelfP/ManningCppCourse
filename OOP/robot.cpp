#include "robot.hpp"

namespace TalosOneHL {
    Robot::Robot(const std::string& name, int versionNumber) :
            name(name), versionNumber(versionNumber), internalTemperature(30.0), hardwareInitialized(false) NO_BODY

    void Robot::greetUser() {
        std::cout << "Hello, my name is " << name << ", ready to help!" << std::endl;
    }

    void Robot::initHardware() {
        std::cout << "Hardware initialised!" << std::endl;
        hardwareInitialized = true;
    }

    void Robot::printInfo() {
        greetUser();
        std::cout << "Version number: " << versionNumber << std::endl;
        std::cout << "Temperature: " << internalTemperature << std::endl;
    }
} // TalosOneHL