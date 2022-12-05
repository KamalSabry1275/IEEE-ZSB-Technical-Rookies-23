#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    stack<char> stack;
    bool parenrmatch = true;
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        char c = s[i];
        if(c == '(' || c == '{' || c == '[') stack.push(c);
        else if(c == ')' || c == '}' || c == ']'){
            if(stack.empty()){parenrmatch = false; break;}
            char check = stack.top();
            if(!((c == ')' && check == '(') || (c == '}' && check == '{') || (c == ']' && check == '['))) {parenrmatch = false; break;}
            stack.pop();
        }
    }
    if(stack.empty() && parenrmatch) cout << "true";
    else cout << "false";
    return 0;
}
