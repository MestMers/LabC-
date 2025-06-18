#include <iostream>
using namespace std;
int main() {
    int a,od,ev;
    cin>>a;
    int ars[a];
    for(int i=0; i<a;i++){
        cin>>ars[i];
    }
    od=0;
    ev=0;
    for(int i=0;i<a;i++){
        if(ars[i]%2){
        ev=ev+1;
        }else{
            od=od+1;
        }
    }
    cout<<"Even= "<<ev<<"\n";
    cout<<"Odd= "<<od;
    return 0;
}