#include<bits/stdc++.h>
using namespace std;

void pClosest(vector<vector<int>> pts, int k)
{
    multimap<int, int> mp;
    for(int i = 0; i < pts.size(); i++)
    {
        int x = pts[i][0], y = pts[i][1];
        mp.insert({(x * x) + (y * y) , i});
    }

    for(auto it = mp.begin();
             it != mp.end() && k > 0;
             it++, k--)
        cout << "[" << pts[it->second][0] << ", "
             << pts[it->second][1] << "]" << "\n";
}
