#include<iostream>
#include<string>

using namespace std;

string ReadString() {

    string S1;
    cout << "Enter your string ?\n";
    getline(cin, S1);
    return S1;
}

int CountWords(string S1) {

    string delim = " ";
    string Word;
    short pos = 0;
    short Count = 0;

    while ((pos = S1.find(delim)) != string::npos) {

        Word = S1.substr(0, pos);

        if (Word != "")
            Count++;

        S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
            Count++;

    return Count;
}

int main() {

    cout << "\nThe number of words in your string is :" << CountWords(ReadString()) << endl;

    return 0;
}