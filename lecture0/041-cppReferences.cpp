#include <iostream>

using namespace std;

void subtractOne(int& x) {
    x--;
}

int main() {
    int x = 10;
    // int& xRef = x;

    // cout << (&x == &xRef) << "\n";

    subtractOne(x);
    cout << x << "\n";
    return 0;
}

