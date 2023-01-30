#include "OOP/robot.hpp"
#include "OOP/roboticArm.hpp"

int main() {
    TalosOneHL::Robot robotOne("R2D2", 35);
    TalosOneHL::Robot robotTwo("G_I", 39);
    robotOne.printInfo();
    robotTwo.printInfo();

    TalosOneHL::RoboticArm roboticArm("CanadArm", 4, 5000);
    roboticArm.printInfo();
    roboticArm.pickObject(3, 4);
    roboticArm.putObject(3.23, 3.44);

    return 0;
}