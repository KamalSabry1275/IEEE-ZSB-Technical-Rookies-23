#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;


        string nazwa="hackerrank";
        int l=0;
        bool xd=false;
        for (int i=0;i<s.length();i++)
            {
            if (s[i]==nazwa[l]) {if (l==8){xd=true;} else {l++;}}

        }
        if (xd==true) {cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }


    return 0;
}
