#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadString() {

    string S1;
    cout << "Enter your string ?\n";
    getline(cin, S1);
    return S1;
}

string RemoveAllPunctuation(string S1) {

    string S2 = "";

    for (short i = 0; i < S1.length(); i++) {
    
        if (!ispunct(S1[i]))
            S2 += S1[i];
    }

    return S2;
}

int main() {

    string S1 = "Welcome to Jordan, Jordan is a nice country; it's amazing.";
    cout << "Orginal string :\n" << S1 << endl;
    cout << "\nPunctuation Removed :\n" << RemoveAllPunctuation(S1) << endl;

    return 0;
}