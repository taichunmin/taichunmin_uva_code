#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

struct Soldier{
    int b, j;
};

Soldier va[1000];

int cmp(const void *pa, const void *pb)
{
    Soldier &a = *(Soldier*)pa, &b = *(Soldier*)pb;
    return b.j - a.j;
}

int main()
{
    int ia, T=0;
    while(scanf("%d", &ia)!=EOF && ia){
        for(int i=0;i<ia;i++)
            scanf("%d %d", &va[i].b, &va[i].j);
        qsort(va, ia, sizeof(Soldier), cmp);
        int ans = 0, bsum = 0;
        for(int i=0;i<ia;i++){
            bsum += va[i].b;
            ans = max(ans, bsum + va[i].j);
        }
        printf("Case %d: %d\n", ++T, ans);
    }
}
