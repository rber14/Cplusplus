#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;


int main()
{
   double sqRoot = -1;
   double cosin = 2.0;
   double lg = 0.0;
   
   cout << "-1 squared is: "<< sqrt(sqRoot) << " ,NAN stands for 'not a number'and identifies undefined values" << endl; 
   cout << "Inverse cosine of 2.0 is: "<< acos(cosin) <<", again prints out NAN because it's an undifined or non-represented value" << endl;  
   cout << "Log of 0.0 is: " << log(lg) << ", because it goes to negative infinity" <<endl; 
 
}