/* 
Name: Breden Hulse
Class: Computer Science 2
Description: It is a stack. You are able to push, pop, and able to detect if it is empty.
*/
#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  //reverse num 1234
  stack test;
  //It will push numbers into the stack.
  test.push(1);
  test.push(2);
  test.push(3);
  test.push(4);
  while(!test.isEmpty()){
    //It will print the numbers in reverse order.
    cout << test.pop() << endl;
  }
}