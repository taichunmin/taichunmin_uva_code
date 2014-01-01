#include<iostream>
#include<cstdlib>
using namespace std;

int arr[500];

int cmp(const void* pa, const void* pb)
{
    int &a = *(int*)pa, &b = *(int*)pb;
    return a-b;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int ia;
        cin>>ia;
        for(int i=0;i<ia;i++)
            cin>>arr[i];
        qsort(arr,ia,sizeof(int),cmp);
        long long la = 0;
        int ib = ia/2;
        for(int i=0;i<ib;i++)
            la -= arr[i];
        for(int i=ib+1; i<ia; i++)
            la += arr[i];
        if(ia%2==0)
            la+=arr[ib];
        cout<<la<<endl;
    }
}
