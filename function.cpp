#include <iostream>
using namespace std;

int add(int a, int b)
{
  int result;
  result=a+b;
  return result;
}

int main()
{
  int x;
  x = add(1,2);
  cout << "The output is: "<< x << endl;
}
