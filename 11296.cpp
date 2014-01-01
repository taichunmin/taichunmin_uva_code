//d224: 11296 - Counting Solutions to an Integral Equation
#include<iostream>
using namespace std;

int main()
{
  long long n;
  while(cin>>n)
  {
    n/=2;
    n+=2;
    cout<<n*(n-1)/2<<endl;
  }
  //system("pause");
}
