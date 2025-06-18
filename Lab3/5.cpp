#include <iostream>
using namespace std;

int main() {
    int n,a,e;
    e=0;
    bool s=true;
    cin >> n;
    int ars[n];
    for (int i = 0; i < n; i++) {
        cin >> ars[i];
    }
    cin>>a;
    for(int i=0; i<n;i++){
        if(ars[i]==a){
            e=i;
            s=false;
        }
    }
    if(s){
        cout<<"Not found";
    }else{
        cout<<"Fount at index"<<e;
    }

}