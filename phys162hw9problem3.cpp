#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   int previous;
   for(int i=0; i<=50; i++)
   {
      cout << "i = "<< i << " " ;
      previous += i;
      cout <<"sum = " << previous << endl;
   }
}