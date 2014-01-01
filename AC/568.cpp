#include<iostream>
using namespace std;

int main()
{
    int aa[10000];
    long long bb=1;
    for(int i=1;i<=9999;i++)
    {
			  bb*=i;
			  while(bb%10==0)bb/=10;
        bb%=100000;
        while(bb%10==0)bb/=10;
			  aa[i-1]=bb%10;
    }
		int cc;
		while(cin>>cc)
    {
		  cout.width(5);
			cout<<cc<<" -> ";
			cout<<aa[cc-1]<<endl;
		}
		//system("pause");
}
