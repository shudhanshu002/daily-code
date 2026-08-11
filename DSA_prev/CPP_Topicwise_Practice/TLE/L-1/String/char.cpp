#include <bits/stdc++.h>
using namespace std;

// int main() {
//     char c;
//     cin>>c;
//     if(c>=97) {
//         cout<<(char)(c-32);
//     }else {
//         cout<<(char)(c+32);
//     }
    
//     return 0;
//     // cout<<round(90.4)<<endl;
//     // printf("%.2d",34.5678);
// }


int main() {
    char c;
    cin >> c;

    if (islower(c)) {
        cout << (char)toupper(c);
    } else if (isupper(c)) {
        cout << (char)tolower(c);
    } else {
        cout << "Not an alphabetic character.";
    }
    float k=54.3444;
    cout<<endl<<fixed <<setprecision(3);
    cout<<"val "<<k<<endl;
    cout<<log2(64);
    return 0;
} 