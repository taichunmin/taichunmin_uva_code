#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int a1,a2;
      cin>>a1>>a2;
      int clothes[6]={0};//¤À§O¬OXXL, XL, L, M, S, XS 
      for(int j=0;j<6;j++)clothes[j]=a1/6;
      char cho1[30][4],cho2[30][4],char ch,record[6][30]={0};
      for(int j=0;j<a2;j++)(cin>>cho1>>ch>>cho2).get();
      char icho[30][3]={0};
      for(int j=0;j<a2;j++)
      {
				if(cho1[j][1]=="XXL")icho[j]=1;
				if(cho1[j][1]=="XL")icho[j]=2;
				if(cho1[j][1]=="L")icho[j]=3;
				if(cho1[j][1]=="M")icho[j]=4;
				if(cho1[j][1]=="S")icho[j]=5;
				if(cho1[j][1]=="XS")icho[j]=6;
				if(cho2[j][0]=="XXL")icho[j]=1;
				if(cho2[j][0]=="XL")icho[j]=2;
				if(cho2[j][0]=="L")icho[j]=3;
				if(cho2[j][0]=="M")icho[j]=4;
				if(cho2[j][0]=="S")icho[j]=5;
				if(cho2[j][0]=="XS")icho[j]=6;
				
    }
system("pause");
}
