// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;

int fib(int n, int depth) {
    printIndent(depth);
    cout << "SEARCH fib(" << n << ")\n";

    int result;
    if (n == 1 || n == 2) {
        result = 1;
    } 
    else {
        int a = fib(n - 1, depth + 1); 
        int b = fib(n - 2, depth + 1); 
        result = a + b;
    }

    printIndent(depth);
    cout << "GET fib(" << n << ") = " << result << "\n";

    return result;
}
void printIndent(int depth) {
    if (depth <= 0) return; 
    cout << "|--";
    printIndent(depth - 1);  
}



int main() {
    int n;
    cin >> n;
    int ans = fib(n, 0);
    cout << ans << endl;
    return 0;
}

