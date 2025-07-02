#include <iostream>
using namespace std;

int f(int n){
    return n? n*f(n-1):1;
}

int main(){
    int n; 
    cin>>n;
    cout<<f(n);
}

