#include<iostream>

using namespace std;

int main(){
    int n;
    int a[100];
    bool check[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        check[i]==true;
    }
    for(int j=0; j<n; j++){
        int i=0;
        if(check[j]==true){
            check[j]==false;
            i++;
            for(int k=j+1; k<n; k++){
                if(a[j]==a[k]){
                    i++;
                    check[k]==false;
                }
            }
            cout << "bien" << a[j] <<" xuat hien" << i <<" lan" << endl;
        }else continue;
    }
}