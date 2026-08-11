#include <iostream>
using namespace std;

int lcs (string s1,string s2,int i,int j){
    if(i==s1.length() || j==s2.length()) return 0;

    if(s1[i]==s2[j]) return 1 + lcs(s1,s2,i+1,j+1);

    return max(lcs(s1,s2,i+1,j),lcs(s1,s2,i,j+1));
}

int lcsLength(string s1,string s2,int i,int j){
    if(i==0 || j==0) return 0;
    if(s1[i-1]==s2[j-1]) return 1+ lcsLength(s1,s2,i-1,j-1);

    return max(lcsLength(s1,s2,i-1,j),lcsLength(s1,s2,i,j-1));
}

int main() {
    string s1 = "abcde";
    string s2 = "ace";
    int result = lcsLength(s1, s2, s1.length(), s2.length()); // Start from index 0
    cout << "Length of LCS: " << result << endl;
    return 0;
} 