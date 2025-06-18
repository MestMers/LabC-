#include <iostream>
using namespace std;

int main() {
    int maxr=0;
    int maxs=0;
    int ars[4][4];
    for (int i = 0; i < 4; i++) {
        for(int j=0;j<4;j++){
            cin>>ars[i][j];
        }
    }
    for(int i=0;i<4;i++){
        int rows=0;
        for(int j=0;j<4;j++){
             rows+=ars[i][j];}
        if(rows>maxs || i==0){
            maxs=rows;
            maxr=i;
         }
             
        }
    cout<<"Row "<<maxr<<" has the maximum sum : "<<maxs;
}