#include <iostream>
#include <fstream>  // for file operations
using namespace std;

int main() {
    int n1, n2;

    // Step 1: Take two space-separated integers as input
    cin >> n1 >> n2;

    // Step 2: Calculate the sum
    int sum = n1 + n2;

    // Step 3: Write the sum to "sum.txt"
    ofstream fout("sum.txt");
    if (fout) {
         // Close the file after writing

         // Output messages as per the format
        fout << "Sum successfully written to the file 'sum.txt'." << endl;
        fout << "Sum: " << sum << endl;
        fout.close();
    } else {
        // Error message if file couldn't be opened
        cout << "Error opening the file." << endl;
        return 1;
    }

    ifstream fin("sum.txt");
  /*  if(fin.is_open()) {
        string word;
        while(fin>>word) {
            cout<<word<<" ";
        }
        fin.close();
    }*/
    if(fin.is_open()) {
        string line;
        while(getline(fin,line)) {
            cout<<line<<endl;;
        }
        fin.close();
    }

    return 0;
}

