#include <iostream>
#include <string>
using namespace std;
namespace Outer {
    void printf(string s) {
        cout<<s<<endl;
    }
    namespace Inner {
        void display() {
            cout << "Inside Inner Namespace" << endl;
        }
    }
}

int main() {
    Outer::printf("My name is sk");
    Outer::Inner::display(); // Accessing the nested namespace function
    return 0;
}

