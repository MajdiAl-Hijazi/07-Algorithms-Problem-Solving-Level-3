#include<iostream>
#include<string>
using namespace std;

char ReadChar() {

    char Ch;
    cout << "Enter a character ?\n";
    cin >> Ch;
    return Ch;
}

bool IsVowel(const char& Character) {

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

    /*
    * 
    or :

    Character = tolower(Character);
    return ((Character == 'a') || (Character == 'e') || (Character == 'i') || (Character == 'o') || (Character == 'u'));

    */
}

void CheckVowelLetter(const char& Character) {

    if (IsVowel(Character))
        cout << "Yes Letter \'" << Character << "\' is vowel" << endl;
    else
        cout << "No Letter \'" << Character << "\' is not vowel" << endl;

}

int main() {

    char Character = ReadChar();
    CheckVowelLetter(Character);

	return 0;
}