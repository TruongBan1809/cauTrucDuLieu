#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(){
    int t;
    cin >> t;
    deque<int> log;
    while(t--){
        string s;
        cin >> s;
        if( s == "PUSHFRONT"){
            int i;
            cin >> i;
            log.push_front(i);
        }else if(s == "PRINTFRONT"){
            if(log.empty()) cout << "NONE" << endl;
            else cout << log.front() << endl;
        }else if(s == "POPFRONT"){
            if(log.empty()) continue;
            else log.pop_front();
        }else if( s == "PUSHBACK"){
            int i;
            cin >> i;
            log.push_back(i);
        }else if(s == "PRINTBACK"){
            if(log.empty()) cout << "NONE" << endl;
            else cout << log.back() << endl;
        }else if(s == "POPBACK"){
            if(log.empty()) continue;
            else log.pop_back();
        }
    }
}