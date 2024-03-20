// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 9A
// Write a program 3d-space.cpp, in which you define a function length() 
// that receives the coordinates of a point P passed as a pointer, 
// and computes the distance from the origin to the point P:
// LAB 9B
// In the same file 3d-space.cpp, add a function
// Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);
// Which receives the coordinates of two points (passed as pointers), 
// and returns the pointer of the point that is farther away from the origin.

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};


void move(Coord3D *ppos, Coord3D *pvel, double dt){
    ppos->x += pvel->x * dt;
    ppos->y += pvel->y * dt;
    ppos->z += pvel->z * dt;

}




int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed

    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
    return 0;
}
