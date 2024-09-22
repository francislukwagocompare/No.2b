#include <iostream>
using namespace std;

int findThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);  // Sum of angles in a triangle is 180 degrees
}

int main() {
    int angle1 = 60, angle2 = 70;
    int thirdAngle = findThirdAngle(angle1, angle2);
    cout << "Third angle of the triangle is: " << thirdAngle << endl;
    return 0;
}
