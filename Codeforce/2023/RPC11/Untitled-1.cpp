#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int y, x, r;
    cin >> y >> x >> r;

    double distance_x = abs(x); // Horizontal distance
    double distance_y = y;     // Vertical distance

    // Calculate the angle between the kicker and the intersection point
    double angle_kicker = atan2(distance_y, distance_x);

    // Calculate the angle between the goalie's reach and the X-axis
    double angle_goalie = atan2(r, distance_x);

    // Calculate the absolute difference between the two angles
    double angle_difference = abs(angle_kicker - angle_goalie);

    // Check if the goalie can save the penalty
    if (angle_difference >= atan2(distance_x, distance_y)) {
        cout << "-1" << endl;
    } else {
        cout << fixed << setprecision(9) << angle_difference * 180.0 / M_PI << endl;
    }

    return 0;
}
