/**
 *   @file: prog1.cc
 * @author: Avery Hauser
 *   @date: 9/14/2023
 *  @brief: lab3: shows what a number multiplied by 2 
 * until you force it to stop
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
  
  int i;

  while (cin >> i) {
    cout << i << " times 2 = " << (i * 2) << endl;
  }
  return (EXIT_SUCCESS);
}
