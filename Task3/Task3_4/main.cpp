#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pages;
    int p;
    cin >> pages >> p;
    if((pages%2)==1) pages--;
    int count = 0;
    if((pages/2)>= p) for(int i = 1;i<p;i+=2) count++;
    else for(int i = pages;i>p;i-=2) count++;
    cout << count;
    return 0;
}
