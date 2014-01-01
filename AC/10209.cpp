#include<iostream>
#include<cmath>
using namespace std;
double PI3=(2.0*acos(0.0))/3;
double A=sqrt(3.0);

int main()
{
    double a;
    while(cin>>a)
    {
      double b=a*a;
      cout.precision(3);
      cout.setf(ios::fixed,ios::floatfield);
      cout<<b*(1+PI3-A)<<' '
          <<b*(PI3+2*A-4)<<' '
          <<b*(4-2*PI3-A)<<endl;
    }
}
