/**
 *   @file: prog1.cc
 * @author: Avery Hauser
 *   @date: 9/14/2023
 *  @brief: lab3: Calculates celsius to 
 * fahrenheit and the reverse for already
 * determined values
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   double fah = 56;  //declare and initialize at the same time - page 48
   double cel = 20;

   ctof = (cel * 9/5) + 32;
   ftoc = (fah - 32) * 5 / 9;

 cout << fixed << setprecision(1);
 
   cout << cel << " degrees Celsius in Fahrenheit is " 
   << ctof << endl;
  

   cout << fah << " degrees Fahrenheit in Celsius is " 
   << ftoc << endl;

   return (EXIT_SUCCESS);
}
