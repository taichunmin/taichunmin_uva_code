#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

long long va[1000000];

int main()
{
    int ia;
    while(scanf("%d", &ia)!=EOF){
        long long avg = 0;
        for(int i=0;i<ia;i++){
            scanf("%lld", &va[i]);
            avg += va[i];
        }
        avg /= ia;
        va[0] = 0;
        for(int i=1;i<ia;i++)
            va[i] = va[i-1] + va[i] - avg;
        sort(va, va+ia);
        long long mid = va[ia>>1], ans = 0;
        for(int i=0;i<ia;i++)
            ans += abs(mid - va[i]);
        printf("%lld\n", ans);
    }
}
