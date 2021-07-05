#include<iostream>
#include<queue>
#include<string>

using namespace std;



long stringToNum(string x){
    int j = x.length();
    long res = 0;
    for(int i=0; i<j; i++){
        res = res*10 + (x[i] - '0');
    }
    return res;
}

void kiemTra(long n){
    queue<string> log;
    log.push("1");
    int dem = 0;
    while(stringToNum(log.front()) <= n){
        dem ++;
        string x  = log.front();
        log.pop();
        log.push(x + "0");
        log.push(x + "1");
    }
    cout << dem << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long n; cin >> n;
        kiemTra(n);
    }
}