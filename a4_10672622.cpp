#include <iostream>
#include<cstdlib>

using namespace std;


int euclid (int x1, int x2)

 {
  if ((x1 >= x2)&& (x1%x2)==0)
  return x2;
  else euclid(x2, (x1%x2));
 }


int main()

{
int x1;
int x2;
int soln;

    cout << "Enter any two positive numbers" << endl;
    cin >> x1 >>x2;
    soln = euclid(x1,x2);
    cout << "\nThe Greatest Common Factor of" <<x1 << "and" <<x2 << "\nis" << soln <<endl <<endl;
    return 0;
}

