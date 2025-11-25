// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;
long long factorial(int n){
    if(n==0)return 1;
    return factorial(n)*factorial(n-1);
}
long long sum(int n){
    if(n==0)return 0;
    return sum(n)+sum(n-1);
}
int main() {
    int a;
    cin>>a;
    cout<<factorial(a)<<endl;
    cout<<sum(a)<<endl;
    
    return 0;
}
