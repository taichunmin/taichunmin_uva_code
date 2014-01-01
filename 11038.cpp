#include<iostream>
using namespace std;

int main()
{
    long long a1,a2,b1,b2,ten=1,total=0;
		while(cin>>a1>>a2)
    { 
      if(a1<0 && a2<0)break;
			int t=1;
			do
 		  {
			 	for(int j=0;j<t;j++)ten*=10;
			 	b1=(long long)a1/ten+1;
			 	b2=(long long)a2/ten;
			 	total+=(b2-b1)+1;
			 	t++;
			}while(ten<a2);
				
			cout<<total<<endl;
			t=ten=total=1;		
		}
		system("pause");
}
