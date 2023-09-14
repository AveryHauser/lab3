// This program is suppose to read in two integer
// numbers num1 and num2, and prints out the two
// numbers and the  product of  num1 and num2.
// There are two compilation errors.
// Find and fix them.

/**
 *   @file: prog1.cc
 * @author: Avery Hauser
 *   @date: 9/14/2023
 *  @brief: lab: does multiplacation with the
 * sum of the two integers the user enters
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int num1;
  int num2;  
  
  cout <<" Enter two integers   ";
  cin >> num1 >> num2;
  
  cout<<" The product of "<< num1 << " and " << num2 << " is ";
  cout<< num1 * num2 << endl;

  return (EXIT_SUCCESS);
}
