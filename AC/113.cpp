#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
        long double b;
        cin>>b;
        cout<<pow(b,long double(1/a))<<endl;
    }
    system("pause");
}
