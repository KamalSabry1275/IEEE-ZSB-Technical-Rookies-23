#include <iostream>
using namespace std;

int main() {
    int n,m,g;
    cin >> n >> m;
    for(int i =1;i<=n;i++){
        if(n % i == 0 && m % i == 0) g = i;
    }
    cout << g;
    return 0;
}
