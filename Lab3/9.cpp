#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int ars[4][4];
    for (int i = 0; i < 4; i++) {
        for(int j=0;j<4;j++){
            cin>>ars[i][j];
        }
    }
    cout<<"Main: ";
     for(int i=0;i<4;i++){
            cout<<ars[i][i]<<" ";
    }
    cout<<endl<<"Secondary: ";
    for(int i=0;i<4;i++){
        cout<<ars[i][3-i]<<" ";
        
    }
}