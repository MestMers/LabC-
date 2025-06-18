#include <iostream>
using namespace std;
int main() {
    int a,sum,s;
    s=0;
    sum=0;
    cin>>a;
    int ars[a];
    for(int i=0; i<a;i++){
        cin>>ars[i];
    }
    for(int i=0;i<a;i++){
        sum=sum+ars[i];
    }
    cout<<sum;
    return 0;
}