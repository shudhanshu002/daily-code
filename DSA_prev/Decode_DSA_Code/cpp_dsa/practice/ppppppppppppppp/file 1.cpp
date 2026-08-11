#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin>>input;
    // Step 1: Write the initial sentence to the file
    ofstream fout("sample.txt");
    if (fout) {
        fout << "Time is a Great Teacher BUT Unfortunately It Kills All Its Pupils";
        fout.close();  // Close the file after writing
    } else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Step 2: Append a new word to the file
    ofstream fout_append("sample.txt", ios::app);  // Open in append mode
    if (fout_append) {
        fout_append <<" "<<input;
        cout<<"Data appended successfully"<<endl;// Appending "string" at the end
        fout_append.close();  // Close the file after appending
    } else {
        cout << "Unable to open file for appending." << endl;
        return 1;
   }

    // Step 3: Read the entire content word by word and print it
    ifstream fin("sample.txt");
    if (fin) {
        string word;
        while (fin >> word) {  // Reading word by word
            cout << word << " ";  // Print each word on a new line
        }
        fin.close();  // Close the file after reading
    } else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    return 0;
}

