#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        stack<int> log;

        for(int i=n-1; i>=0; i--){
            if(s[i] >= '0' && s[i] <= '9'){
                log.push(s[i] - '0');
            }else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                int s2 = log.top(); log.pop();
                int s1 = log.top(); log.pop();
                if(s[i]=='+'){
                    s2=s1+s2;
                    log.push(s2);
                }
                else if(s[i]=='-'){
                    s2 = s2-s1;
                    log.push(s2);
                }
                else if(s[i]=='*'){
                    s2 = s1*s2;
                    log.push(s2);
                }
                else{
                    s2 = s2/s1;
                    log.push(s2);
                }
            }
            // cout<<log.top()<<endl;
        }
        cout<<log.top()<<endl;
    }
}