#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int va[20000], vb[20000];

int main()
{
    int ia,ib;
    while(scanf("%d %d", &ia, &ib)!=EOF, ia+ib){
        for(int i=0;i<ia;i++)
            scanf("%d", &va[i]);
        for(int i=0;i<ib;i++)
            scanf("%d", &vb[i]);
        sort(va, va+ia);
        sort(vb, vb+ib);
        int ans = 0, ic = 0, id = 0;
        bool doomed = ia > ib;
        for(;ic<ia && !doomed;ic++,id++){
            while(id<ib && vb[id]<va[ic])
                id++;
            if(vb[id]<va[ic])
                doomed = true;
            ans += vb[id];
        }
        if(doomed)
            puts("Loowater is doomed!");
        else printf("%d\n", ans);
    }
}
