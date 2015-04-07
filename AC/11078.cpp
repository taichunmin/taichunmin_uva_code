#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int va[100000];

int main()
{
    int T;
    cin>>T;
    while(T--){
        int ia;
        cin>>ia;
        for(int i=0;i<ia;i++)
            scanf("%d", &va[i]);
        int imax = va[0], ians = va[0]-va[1];
        for(int i=1;i<ia;i++){
            ians = max(ians, imax - va[i]);
            imax = max(imax, va[i]);
        }
        printf("%d\n", ians);
    }
}
