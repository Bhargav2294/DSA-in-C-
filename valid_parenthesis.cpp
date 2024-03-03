#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    stack<char>s;

    for(char ch : n){

        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if (s.empty())
            {
                cout << "not valid" << endl;
                return 0;
            }

            char top = s.top();
            if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')){
                s.pop();
            }
            else{
                cout << "not valid" << endl;
                return 0;
            }
        }
    }
    if(s.empty())
        cout << "valid"<< endl;
    else
        cout << "not valid" << endl;

    return 0;
}