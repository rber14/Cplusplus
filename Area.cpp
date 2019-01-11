/*
*  Roberto Campos
*  Phys162HW8Problem1
*  Oct 30
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

//constexpr double PI = std::acos(-1);
float PI = 3.14;
int main(int argc, char** argv)
{
   double radius, circum, area;
   
   cout << "pi= " <<std::setprecision(16) << PI << endl;
   
   cout << "Enter a radius in meter: ";
   cin >> radius;
   
   circum = 2.*PI*radius;
   area=PI*pow(radius,2);
   
   cout << "Radius: " << radius << "m" << endl;
   cout << "Circumference " << circum << "m" << endl;
   cout << "Area: " << area << "m^2" << endl;
   
   return EXIT_SUCCESS;
}