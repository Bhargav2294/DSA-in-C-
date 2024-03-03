#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;

    stack<char>s;

    for(int i=0;i<n.length();i++){
        char ch=n[i];
        s.push(ch);
    }

    string ans;

    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout << "answer is: " << ans << endl;
    
    return 0;
}