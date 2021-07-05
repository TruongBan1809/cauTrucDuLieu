#include<iostream>
#include<vector>
#include<queue>
#include<string>

using namespace std;


//chuyen ky tu thanh so
int stringToNum(string x){
    int res = 0;                            //de luu so
    for(int i=0; i<x.length(); i++){
        res = res*10 + (x[i] - '0');
    }
    return res;
}

//vector de luu so
vector<int> linh;
//queue de luu ki tu
queue<string> log;

//ham khoi tao cac gia tri tu 9---9999
void Init(){
    log.push("9");
    for(int i=1000; i>0; i--){
        string x = log.front();                 //lay ra khoi queue
        //ham chuyen ki tu thanh so
        linh.push_back(stringToNum(x));         //chuyen thanh so va luu vao stack
        log.pop();                              //vut di khoi queue
        log.push(x + "0");                      //them duoi "0"/"9" va luu lai vao cuoi queue
        log.push(x + "9");
    }
}

//kiemm tra so nho nhat chia het
void chiaHet(int n){
    for(int i=0; i<linh.size(); i++){
        if(linh[i] % n == 0){
            cout << linh[i] << endl;
            break;
        }
    }
}

int main(){
    int t;
    cin >> t;
    Init();
    while(t--){
        int n;
        cin >> n;
        chiaHet(n);
    }
}