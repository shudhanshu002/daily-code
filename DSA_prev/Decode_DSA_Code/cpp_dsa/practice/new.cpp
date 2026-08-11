#include <iostream>
using namespace std;

int main() {
    int value = 13;
    int* ptr = &value;
    int** ptrToPtr = &ptr;

    cout << value << " ";

    **ptrToPtr = **ptrToPtr + 87;

    cout << **ptrToPtr;

    return 0;
}
