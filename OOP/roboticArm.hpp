#ifndef MANNINGCPPCOURSE_ROBOTICARM_HPP
#define MANNINGCPPCOURSE_ROBOTICARM_HPP

#include "robot.hpp"
#define NO_BODY {}

namespace TalosOneHL {

    class RoboticArm : public TalosOneHL::Robot{
    public:
        RoboticArm(const std::string& name, int versionNumber, double reachInMillimeters);

        void pickObject(double x, double y);

        void putObject(double x, double y);
    private:
        double reachInMillimeters;
        bool moving;
    };

} // TalosOneHL

#endif //MANNINGCPPCOURSE_ROBOTICARM_HPP
