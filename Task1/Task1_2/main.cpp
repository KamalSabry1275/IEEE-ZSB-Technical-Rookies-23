#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    ll factorial = 1;
    for(int i = n ; i > 1 ;i--){
        factorial *= i;
    }
    cout << factorial;
    return 0;
}
