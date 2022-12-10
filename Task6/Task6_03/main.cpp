#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

int main()
{
    int n, q, v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        vec.push_back(v);
    }
    sort(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), unique(vec.begin(), vec.end())));
    cin >> q;
    while (q--)
    {
        cin >> v;
        cout << distance(upper_bound(vec.begin(), vec.end(), v), vec.end())+1 << '\n';
    }
}
