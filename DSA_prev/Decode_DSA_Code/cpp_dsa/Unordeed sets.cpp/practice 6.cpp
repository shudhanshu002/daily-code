
#include <iostream>
#include <iomanip>  // Needed for manipulators like std::oct and std::hex
using namespace std;

int main() {
    int N;
    cin >> N;

    // Display the number in decimal format
    cout << "Decimal format: " << N << endl;

    // Display the number in octal format
    cout << "Octal format: " << oct << N << endl;

    // Display the number in hexadecimal format
    cout << "Hexadecimal format: " << hex << N << endl;

    return 0;
}
