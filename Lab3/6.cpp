#include <iostream>
using namespace std;

int main() {
    int ars[3][3];
    int ard[3][3];
    int arf[3][3];
    for (int i = 0; i < 3; i++) {
        for(int j=0;j<3;j++){
            cin>>ars[i][j];
        }
    }
     for (int i = 0; i < 3; i++) {
        for(int j=0;j<3;j++){
            cin>>ard[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arf[i][j]=ars[i][j]+ard[i][j];
            if(j<2){
                cout<<arf[i][j]<<" ";
            }else{
                cout<<arf[i][j]<<endl;
            }
        }
    }
}