#include<iostream>
#include<cstdio>
using namespace std;

int arr1[50];

int main()
{
    int ia,ib,ic;
    while(cin>>ia>>ib)
    {
        int id=1;
        if(ia<2 || ib<2)
        {
            puts("Boring!");
            continue;
        }
        ic = arr1[0] = ia;
        while(ic>1)
        {
            if( ic%ib==0 )
                arr1[id++] = (ic/=ib);
            else break;
        }
        if(ic==1)
            for(int i=0;i<id;i++)
                printf("%d%c",arr1[i],(i==id-1)?'\n':' ');
        else puts("Boring!");
    }
}
