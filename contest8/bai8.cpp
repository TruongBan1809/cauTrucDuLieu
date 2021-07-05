#include<iostream>
#include<queue>
#include<string>
#include<vector>

using namespace std;

queue<string> log;
vector<long long> linh;

long long stringToNum(string x){
    long long res = 0;                           
    for(int i=0; i<x.length(); i++){
        res = res*10 + (x[i] - '0');
    }
    return res;
}

void Init(){
    log.push("1");
    for(long long i=100000; i>0; i--){
        string x = log.front();                 
        linh.push_back(stringToNum(x));         
        log.pop();                              
        log.push(x + "0");                      
        log.push(x + "1");
    }
}


int main(){
    int t;
    cin >> t;
    Init();
    while(t--){
        int n;
        cin >> n;
        for(long i=0; i<linh.size(); i++){
            if(linh[i]%n == 0){
                cout << linh[i] << endl;
                break;
            }
        }

    }
}