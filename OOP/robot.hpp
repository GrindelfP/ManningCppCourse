#ifndef MANNING_CPP_COURSE_ROBOT_HPP
#define MANNING_CPP_COURSE_ROBOT_HPP

#include <string>
#include <iostream>
#define NO_BODY {}

namespace TalosOneHL {

    class Robot {
    public:
        Robot(const std::string &name, int versionNumber);

        void greetUser();

        void initHardware();

        void printInfo();

    private:
        std::string name;
        int versionNumber;
        double internalTemperature;
        bool hardwareInitialized;
    };

} // TalosOneHL

#endif //MANNING_CPP_COURSE_ROBOT_HPP
