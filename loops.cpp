#include <iostream>
using namespace std;

int main ()
{
  int n = 0;

  while (n<=5) {
    cout << n << " ";
    ++n;
  }
  cout << endl;
  
  for (int i=0; i<=5; i++) {
    cout << i << " ";
  }
  cout << endl;
  
  
 int a, b;
 
 a= 1;
 b = a++;
 cout << "a = " << a << ", b = " << b <<endl;

 a= 1;
 b = ++a;
 cout << "a = " << a << ", b = " << b <<endl;
	
}
