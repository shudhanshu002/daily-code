#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(string& s, int index, string current) {
    if (index == s.size()) {
        cout << "\"" << current << "\" ";  // Print the subset
        return;
    }

    // Include current character
    generateSubsets(s, index + 1, current + s[index]);

    // Exclude current character
    generateSubsets(s, index + 1, current);
}

int main() {
    string s = "abc";
    cout << "All subsets: ";
    generateSubsets(s, 0, "");
    cout << endl;
    return 0;
}

