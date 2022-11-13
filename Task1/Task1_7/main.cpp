#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll num;
    cin >> num;
    ll numTemp = num;
    ll value = 0;
    ll size = sizeof(num);
    while(numTemp>0){
        int temp = numTemp % 10;
        numTemp /= 10;
        value = 10*value + temp;
    }
    cout << value << "\n";
    if (num == value) cout << "YES";
    else cout << "NO";
    return 0;
}
