	#include <iostream>
using namespace std;

void square_val(int a)
{
	a *= a;
}

void square_ref(int& a)
{
	a *= a;
}

int main()
{
  int a(3), b(3);
  square_val(a);
  square_ref(b);
  cout << "a is : "<< a << endl;
  cout << "b is : "<< b << endl;
}
