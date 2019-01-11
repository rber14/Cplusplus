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
   std::string name;
   std::string date;
  
   int answer;
   cout << "Enter your full name: ";
   getline (cin, name);
   cout << "Enter todays date: ";
   getline (cin, date);
   cout << "Enter the answer to 2+2: ";
   cin >> answer;
   cout << endl;
   cout << "Hello, " << name << endl;
   cout << "Today is "<< date << endl;
   
   if(answer!=4)
   {
      cout << "2+2 does not equal: " << answer;
      exit(EXIT_FAILURE);
   }
   
   cout << "Your answer was " << answer << " that's correct"<< endl;
   
}