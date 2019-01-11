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
   int age;
   float weight, height;
   
   cout << "Enter your age: ";
   cin >> age;
   cout << "Enter your weight in kilograms: ";
   cin >> weight;
   cout << "Enter your height in centimeters: ";
   cin >> height;
   cout << endl;
   cout << "Based on the following information:" <<endl<<endl;
   
   if(age<16)
   {
      cout << "-You're not old enough to drive" << endl;
   }else{
      cout << "-You're old enough to drive" << endl;
   }
   
   if(age < 20)
   {
      cout << "-You're not in your 20's " << endl;
   }else{
      cout << "-You're in your 20's " << endl;
   }
   
   if(age < 22 && weight < 65)
   {
      cout << "-You're younger than 22 and less than 65kg " << endl;
   }else if(age > 26 && height > 180){
      cout << "-You're older than 26 and taller than 180" << endl;
   }
   
   if( (age >=18 && height >= 150) && (age>=60 || age<=64))
   {
      cout << "-You can vote, you can hit your head on a 150cm door and you can box in the 60-64kg division";
   }else{
      cout << "-Sorry, you missed one of the qualifications.\n 1)You are either to young to vote.\n 2)Not tall enough to hit your head on the 150cm door frame.\n 3)Don't weigh between 60-64kg " << endl;
   }
   
}