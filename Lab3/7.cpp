#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int ars[3][3];
    for (int i = 0; i < 3; i++) {
        for(int j=0;j<3;j++){
            cin>>ars[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ars[j][i]<<" ";
            
        }
        cout<<endl;
    }
}