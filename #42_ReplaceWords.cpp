#include<iostream>
#include<string>
using namespace std;

string ReadString() {

    string S1;
    cout << "Enter your string ?\n";
    getline(cin, S1);
    return S1;
}

string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplaceTo) {

    short pos = S1.find(StringToReplace);

    while (pos != string::npos) {
    
        S1.replace(pos ,StringToReplace.length(), sReplaceTo);
        pos = S1.find(StringToReplace);
    }

    return S1;
}

int main() {

    string S1 = "Welcome to Jordan , Jordan is a nice country";
    cout << "\nString brfore replace :\n" << S1 << endl;
    cout << "\nString after replace :\n" << ReplaceWordInStringUsingBuiltInFunction(S1, "Jordan", "USA") << endl;

    return 0;
}