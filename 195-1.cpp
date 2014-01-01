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
