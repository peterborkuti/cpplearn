// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <stdlib.h> /* srand, rand */
using namespace std;

int getNum(string str) {
  cout << str << endl;
  int num;
      while (!(cin >> num) || num == 0)
    {
      cout << "Please, enter a non-zero number" << endl;
      cin.clear();
      cin.ignore();
    };

    return abs(num);
}

int main()
{
  cout << "Greatest Common Divisor" << endl;
  int a = getNum("Enter the first number");
  int b = getNum("Enter the second number");

  if (a < b) swap(a, b);

  while ( a != b) {
    int t = b;
    b = a - b;
    a = t;

    if (a < b) swap(a, b);
  }

  cout << a << endl;
  
  return 0;
}
