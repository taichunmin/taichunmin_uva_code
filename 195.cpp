//WA
#include<iostream>
using namespace std;

inline int convent(char ca)
{
  if(ca>='a')return (ca-'a')*2+1;
  else return (ca-'A')*2;
}

void dfs(string sa,string sb,string sc,int address,int count)
{
  sb[address]='1';
  sc+=sa[address];
  count++;
  if(count==sa.size())
  {
    printf("%s\n",sc.c_str());
    return;
  }
  for(int i=0;i<sa.size();i++)
    if(sb[i]=='0' &&(i<1 || sb[i-1]!='0' || sa[i]!=sa[i-1]))dfs(sa,sb,sc,i,count);
}

int main()
{
  string sa,sb;
  int t1;
  cin>>t1;
  for(int ta=0;ta<t1;ta++)
  {
    cin>>sa;
    for(int i=0;i<sa.size();i++)
      for(int j=i+1;j<sa.size();j++)
        if(convent(sa[i])>convent(sa[j]))sa[i]^=sa[j]^=sa[i]^=sa[j];
    sb.resize(sa.size());
    for(int i=0;i<sa.size();i++)sb[i]='0';
    for(int i=0;i<sa.size();i++)
      if(i<1 || sa[i]!=sa[i-1])dfs(sa,sb,"",i,0);//sa, sb, sc, ¦ì¸m, ¦r¤¸¼Æ 
  }
  //system("pause");
}
/*
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const string strTable = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
int table[128];
main()
{
        for (int i = 0; i < (int)strTable.size(); ++i){
                table[strTable[i]] = i;
        }
        int loop;
        cin >> loop;
        while (loop--){
                string in;
                cin >> in;
                vector<int> v;
                for (string::iterator it = in.begin(); it != in.end(); ++it){
                        v.push_back(table[*it]);
                }
                sort(v.begin(), v.end());
                do {
                        for (vector<int>::iterator it = v.begin(); it != v.end(); ++it){
                                cout << strTable[*it];
                        }
                        cout << endl;
                } while (next_permutation(v.begin(), v.end()));
        }
}
*/
