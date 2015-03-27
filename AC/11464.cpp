#include<iostream>
#include<cstdio>
#include<cstring>
#define oo 2147483647
using namespace std;

int va[15][15], vb[15][15];
int maxn, ans;

int parity(int x, int y)
{
    static int dir[][2] = {{0,1}, {0,-1}, {-1,0}}; // no down direction
    int ia = 0, ib, ic;
    for(int i=0; i<3; i++){
        ib=x+dir[i][0];
        ic=y+dir[i][1];
        if(ib<0 || ib>=maxn || ic<0 || ic>=maxn)
            continue;
        ia += vb[ib][ic];
    }
    return ia;
}

void dp(int index=0, int diff=0)
{
    if(0 == index)
        memset(vb, 0, sizeof(vb)); // clear vb
    if(diff >= ans)
        return; // dp cut
    int x = index / maxn, y = index % maxn;
    if(0 == x){ // first row
        for(int i=va[x][y]; i<2; i++){
            vb[x][y] = i;
            dp(index+1, diff+(va[x][y]!=i));
        }
    } else {
        if( x == maxn ){
            if(ans > diff)
                ans = diff;
            return;
        }
        vb[x][y] = (parity(x-1,y) & 1);
        if(va[x][y] > vb[x][y])
            return; // can not transform 1 to 0
        dp(index+1, diff+(va[x][y] != vb[x][y]));
    }
}

int main()
{
    int T1;
    scanf(" %d", &T1);
    for(int T2=0; T2<T1; T2++){
        scanf(" %d", &maxn);
        ans = oo;
        for(int i=0; i<maxn; i++)
            for(int j=0; j<maxn; j++)
                scanf(" %d", &va[i][j]);
        dp();
        printf("Case %d: %d\n", T2+1, (ans==oo)?-1:ans);
    }
}
