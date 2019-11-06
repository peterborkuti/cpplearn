// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <stdlib.h> /* srand, rand */
using namespace std;

int main()
{
  int v = rand() % 100;

  int guess = 0;

  while (guess != v)
  {
    while (!(cin >> guess))
    {
      cout << "You entered a wrong number" << endl;
      cin.clear();
      cin.ignore();
    };

    if (guess > v)
    {
      cout << "You entered a bigger number" << endl;
    }

    if (guess < v)
    {
      cout << "You entered a lower number" << endl;
    }

    if (guess == v)
    {
      cout << "You found it!" << endl;
    }
  }

  return 0;
}
