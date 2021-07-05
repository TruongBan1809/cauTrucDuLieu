#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> log;
        log.push("1");
        for(int i=1; i<=n; i++){
            cout << log.front() << " ";
            string x = log.front();
            log.pop();
            log.push(x + "0");
            log.push(x + "1");
        }
        cout << endl;
    }
}