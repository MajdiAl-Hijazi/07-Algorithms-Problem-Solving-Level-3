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

bool IsVowel(char Character) {

    /*
    switch (tolower(Character)) {

    case 'a':
        return true;
    case 'e':
        return true;
    case 'i':
        return true;
    case 'o':
        return true;
    case 'u':
        return true;
    default:
        return false;
    }
    */

    Character = tolower(Character);

    return ((Character == 'a') || (Character == 'e') || (Character == 'i') || (Character == 'o') || (Character == 'u'));
}


int CountVowel(const string& S1) {

    short Count = 0;

    for (short i = 0; i < S1.length(); i++) {
    
        if (IsVowel(S1[i]))
            Count++;
    }

    return Count;
}

int main() {

    string S1 = ReadString();
    cout << "Number of vowels is : " << CountVowel(S1) << endl;
    cout << S1 << endl;

    return 0;
}