/*
*  Roberto Campos
*  Phys162HW8Problem3
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
float PI = 3.1415;
float surfaceArea(float r) 
{
    float surfaceArea;
    surfaceArea = 4*PI*r*r;
    return surfaceArea;
}

float sphereVolume(float r) 
{
    float vol;
    vol = (float(4)/ float(3)) * PI * r * r * r;
    return vol;
}

int main()
{
    float radi = 1; //type in different value for radi to get a different calculation
    float volume = sphereVolume(radi);
    float area = surfaceArea(radi);

  cout<<"The volume of the spere is: "<< volume << endl;
  cout << "The surface area is: " << area << endl;
}