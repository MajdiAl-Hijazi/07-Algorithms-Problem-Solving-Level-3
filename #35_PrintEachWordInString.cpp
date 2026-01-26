#include<iostream>
#include<string>

using namespace std;

string ReadString() {

    string S1;
    cout << "Enter your string ?\n";
    getline(cin, S1);
    return S1;
}

void PrintEachWordinString(string S1) {

    cout << "\nYour string words  are :" << endl;

    string delim = " ";
    string Word;
    short pos = 0;

    while ((pos = S1.find(delim)) != string::npos) {
    
        Word = S1.substr(0 ,pos);

        if (Word != "")
            cout << Word << endl;

		S1.erase(0, pos + delim.length());
    }

    if (S1 != "")
        cout << S1 << endl;

}

int main() {

    PrintEachWordinString(ReadString());

    return 0;
}