 /* acm 10394 */
#include <fstream>
#include <cstdlib>
#include <cmath>
#define MAX 20000000
using namespace std;
ifstream infile("pro4.in");
ofstream outfile("pro4.out");


int main()
{
  bool *prime=new bool[MAX+1];
  long tp[100000][2],i,j,k,t,tmp,num,count,a,b;
  //prime=(bool*)malloc(sizeof(bool)*(MAX+1));
  count=0;
  for(i=2;i<=MAX;i++)
    prime[i]=1;
  for(i=4;i<=MAX;i+=2)
    prime[i]=0;
  for(i=3;i<=floor(sqrt(MAX));i++)
  {
    if(prime[i])
    {
      a=i*i;
      b=2*i;
      while(a<=MAX)
      {
        prime[a]=0;
        a+=b;
      }
    }
  }
  for(i=2;i<=MAX&&count<100000;i++)
  {
    if(prime[i]&&prime[i+2])
    {
      tp[count][0]=i;
      tp[count][1]=i+2;
      count++;
    }
  }
  delete [] prime;
  while(infile >>  num)
  {
    outfile << "(" << tp[num-1][0] << ", " << tp[num-1][1] ;
  }
  system("pause");
}
