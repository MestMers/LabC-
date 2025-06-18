#include <iostream>
using namespace std;
int main() {
    int a,ma,mi;
    cin>>a;
    int ars[a];
    for(int i=0; i<a;i++){
        cin>>ars[i];
    }
    mi=ars[0];
    ma=ars[0];
    for(int i=0;i<a;i++){
        if(ma<ars[i]){
        ma=ars[i];
            
        }
        if(mi>ars[i]){
            mi=ars[i];
        }
    }
    cout<<"Max= "<<ma<<"\n";
    cout<<"Min= "<<mi;
    return 0;
}