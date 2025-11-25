#include <iostream>
#include <cmath>

using namespace std;
void hanoi(int n, int from,int to,int aux){
    hanoi(n,1,2,3);
    if(n==1)
        cout<<"Move disk"<<n<<"from"<<from<<"to"<<to<<endl;
    hanoi();
}

int main() {
    

    return 0;
}