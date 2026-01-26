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

char ReadChar() {

    char Ch;
    cout << "\nEnter a character ?\n";
    cin >> Ch;
    return Ch;
}

int CountLetter(const string& S1, const char& Letter, bool MatchCase = true) {

    short Count = 0;

    for (short i = 0; i < S1.length(); i++) {
    
        if (MatchCase) {

            if (S1[i] == Letter)
                Count++;
        }
        else {
        
            if (tolower(S1[i]) == tolower(Letter))
                Count++;
        }
    }

    return Count;
}

char InvertLetterCase(char Character) {

    return isupper(Character) ? tolower(Character) : toupper(Character);
}

int main() {

    string S1 = ReadString();
    char Letter = ReadChar();
    
    cout << "Letter \'" << Letter << "\' Count = " << CountLetter(S1, Letter) << endl;
    cout << "Letter \'" << Letter << "\' or \'" << InvertLetterCase(Letter) << "\' Count = " << CountLetter(S1, Letter, false) << endl;

	return 0;
}