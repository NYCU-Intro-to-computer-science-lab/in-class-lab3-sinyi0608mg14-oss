// 題目 1：高塔建築師 (The Tower Architect) - 20分
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1;           
    return (long long)n * factorial(n - 1);
}

long long sum(int n) {
    if (n == 0) return 0;
    return (long long)n + sum(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << '\n';
    cout << sum(n) << '\n';
    return 0;
}

