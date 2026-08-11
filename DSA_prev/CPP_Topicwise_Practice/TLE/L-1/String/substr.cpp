#include <iostream>
#include <string>
using namespace std;

string getSecondWord(const string& line){
    size_t firstSpace = line.find(' ');
    if(firstSpace==string::npos) return "";

    size_t secondSpace = line.find(' ',firstSpace+1);
    return line.substr(firstSpace+1,secondSpace-firstSpace-1);
}

signed main(){
    string l1,l2;
    getline(cin,l1);
    getline(cin,l2);

    string word1 = getSecondWord(l1);
    string word2 = getSecondWord(l2);

    if(word1.empty() || word2.empty()) {
        cout<<"one word is empty "<<endl;
    } else if (word1 == word2) {
        cout << "Second words are the same: '" << word1 << "'" << endl;
    } else {
        cout << "Second words are different: '" << word1 << "' and '" << word2 << "'" << endl;
    }

}