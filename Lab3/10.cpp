#include <iostream>
using namespace std;

int main() {
    int s;
    cin>>s;
    int ars[s];
    for (int i = 0; i < s; i++){
            cin>>ars[i];
    }
    for(int i=0;i<s-1;i++){
        for (int j = 0; j <s-i-1 ; j++){
            if(ars[j]>ars[j+1]){
            int za =ars[j];
            ars[j]=ars[j+1];
            ars[j+1]=za;
            }
        }
    }
    for(int i=0;i<s;i++){
        cout<<ars[i]<<" ";
    }
}