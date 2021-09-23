#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() 
{  
    map <string,int> a;
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int q = 0;
        cin>>q;
        string x;
        if (q == 1)
        {
            int y = 0;
            cin>>x;
            cin>>y;
            a[x] += y;
        }
        else if (q == 2)
        {
            cin>>x;
            a.erase(x);
        }
        else
        {
            cin>>x;
            map<string,int>::iterator it=a.find(x);
            if (it != a.end())
                cout<<a[x]<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}
