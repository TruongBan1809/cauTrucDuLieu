#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        queue<long> log;
        cin >> n;
        while(n--){
            int s;
            cin >> s;
            if(s==1){
                cout << log.size() << endl;
            }else if(s==2){
                if(log.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
            }else if(s==3){
                long x;
                cin >> x;
                log.push(x);
            }else if(s==4){
                if(log.empty())  continue;
                else log.pop();
            }else if(s==5){
                if(log.empty()) cout << -1 << endl;
                else cout << log.front() << endl;
            }else{
                if(log.empty()) cout << -1 << endl;
                else cout << log.back() << endl;
            }

        }
    }
}