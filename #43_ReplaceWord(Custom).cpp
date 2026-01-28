#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

string ReadString() {

    string S1;
    cout << "Enter your string ?\n";
    getline(cin, S1);
    return S1;
}

vector<string> SplitStringToWord(string S1, string Delim) {

    vector<string> vWord;
    string Word;
    short pos = 0;

    while ((pos = S1.find(Delim)) != string::npos) {

        Word = S1.substr(0, pos);

        if (Word != "")
            vWord.push_back(Word);

        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
        vWord.push_back(S1);

    return vWord;
}

string ConvertAllLettersInWord(string Word, bool ToUpper = true) {

    string WordAfterConvert = "";

    for (short i = 0; i < Word.length(); i++) {
    
        WordAfterConvert += (ToUpper) ? toupper(Word[i]) : tolower(Word[i]);
    }

    return WordAfterConvert;
}

string JoinString(const vector<string>& vStrings, string Delim) {

    if (vStrings.empty())
        return "";

    string S1 = "";

    for (const string& Token : vStrings) {

        S1.append(Token);
        S1.append(Delim);
    }

    return S1.substr(0, S1.length() - Delim.length());
}

string ReplaceWord(string S1, string StringToReplace, string sReplaceTo ,bool MatchCase = true) {

    vector<string>vWord = SplitStringToWord(S1, " ");

    for (string& Word : vWord) {
    
        if (MatchCase) {

            if (Word == StringToReplace)
                Word = sReplaceTo;
        }
        else {
        
            if (ConvertAllLettersInWord(Word) == ConvertAllLettersInWord(StringToReplace))
                Word = sReplaceTo;
        }
    }

    S1 = JoinString(vWord, " ");

    return S1;
}

int main() {

    string S1 = "Welcome to Jordan , Jordan is a nice country";

    cout << "Original string :\n" << S1 << endl;
    cout << "\nReplace with match case :\n" << ReplaceWord(S1, "jordan", "USA") << endl;
    cout << "\nReplace with don't match case :\n" << ReplaceWord(S1, "jordan", "USA", false) << endl;

    return 0;
}