#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<string> log;
        int n = s.length();
        for(int i=0; i<n; i++){
            char x = s[i];
            if(x=='+'||x=='-'||x=='/'||x=='*'){
                string s1 = log.top(); log.pop();
                string s2 = log.top(); log.pop();
                string str = x + s2 + s1;
                log.push(str);
            }else{
                log.push(string(1,x));
            }
        }
        cout << log.top() << endl;
    }
}
