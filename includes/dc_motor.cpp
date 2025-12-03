#include <iostream>
#include <string>
#include <vector>
#include "dc_motor.h"
#include "continue.h"

using std::cin, std::cout, std::string, std::vector, std::pair;

vector<pair<string, string>> dc_motor_questions = {
    {
        "What are the components of a basic DC motor?",
        "A DC motor consists of:\nAn external magnetic field\nA loop of wire sitting inside the magnetic field\nA split-ring commutator (circle with strip cut out off middle) with each end of the loop atttached to one half of the commutator\nTwo brushes supplying current to each half of the split-ring commutator\nA battery supplying current to the brushes"
    },
    {
        "How does a basic DC motor work?",
        "Current flows through the brushes into the split-ring commutator and into the loop. By right-hand-rule 3, the magnetic field exerts a force on the current-filled wire, spinning it.\nAs the loop and commutator spin, the gap in the ring commutator lines up with the brushes, cutting current to the loop. The loop and commutator continue to spin due to inertia\nThe opposite half of the commutator liens up with the brush, reversing the direction of current inside the loop, keeping it spinning"
    },
    {
        "The simple DC motor is weak. How did engineers improve the strength of the DC motor?",
        "Increasing the amount of current through the loop created a lot of thermal energy\nEngineers instead opted to increase the number of loops and add a soft iron core for the loop to loop around\nThis increased the magnetism of the loop, amplifying the strength of the motor"
    },
    {
        "How does the improved DC motor work?",
        "By RHR 2, the coiled conductor has a north and south pole. The north pole of the solenoid repels the north pole of the external magnetic field, spinning the solenoid\nWhen the split in the split-ring commutator reaches the brush, the current is broken. The solenoid spins due to inertia\nAs the split-ring commutator spins around to the other brush, the current in the solenoid reverses, keeping it spinning"
    }
};

void dc_motor_quiz() {
    cout << "Quiz: DC motor\n";
    for (const auto &[quest, ans] : dc_motor_questions) {
        cout << quest << '\n';
        next();
        cout << ans << "\n________________________________________________________________________________________________________________________";
    }
}