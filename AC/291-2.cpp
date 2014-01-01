#include<iostream>
using namespace std;

int aa[25]={0,1,1,0,1,
            1,0,1,0,1,
            1,1,0,1,1,
            0,0,1,0,1,
            1,1,1,1,0};
char bb[10]={};
int ff(int,int);

int main()
{
    ff(0,0);
    system("pause");
}

int ff(int num,int count)//點,第幾次,aa,bb  
{
    if(count==8)
    {
        cout<<bb<<num+1<<endl;
        return 0;
    }
    bb[count]=num+'1';
    bb[count+1]=0;
    for(int i=0;i<5;i++)
        if(aa[i*5+num]==1)
        {
            aa[num*5+i]=2,aa[i*5+num]=2;
            ff(i,count+1);
            aa[num*5+i]=1,aa[i*5+num]=1;
        }
    return 0;
}
