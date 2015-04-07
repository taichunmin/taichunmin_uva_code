#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int T, va[101], ia;
    while(scanf("%d", &T)!=EOF && T){
        memset(va, 0, sizeof(va));
        while(T--){
            scanf("%d", &ia);
            va[ia]++;
        }
        bool spaceout = false;
        for(int i=0; i<=100; i++)
            while(va[i]--){
                if(spaceout) putchar(' ');
                spaceout = true;
                printf("%d", i);
            }
        putchar('\n');
    }
}
