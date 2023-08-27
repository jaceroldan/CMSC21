#include <iostream>

using namespace std;

int main() {
    // new and delete
    int* x = new int(5);
    cout << (*x == 5) << "\n";

    delete x;
    cout << *x;

    int *arr = new int[100];
    delete[] arr;
    return 0;
}
