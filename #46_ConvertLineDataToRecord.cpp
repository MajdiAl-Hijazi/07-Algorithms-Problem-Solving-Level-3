#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct strClientData {

	string AccountNum;
	string PinCinde;
	string Name;
	string Phone;
	double AccountBalance;
};

vector<string> SplitString(string S1, string Seprat) {

	short pos = 0;
	string Word = "";
	vector<string> vWord;

	while ((pos = S1.find(Seprat)) != string::npos) {
	
		Word = S1.substr(0, pos);

		if (Word != "")
			vWord.push_back(Word);

		S1.erase(0, pos + Seprat.length());
	}

	if (S1 != "")
		vWord.push_back(S1);

	return vWord;
}

strClientData ConvertClientDataFromLine(string S1, string Seprat) {

	strClientData ClientData;
	vector<string> vWord = SplitString(S1, Seprat);

	ClientData.AccountNum = vWord[0];
	ClientData.PinCinde = vWord[1];
	ClientData.Name = vWord[2];
	ClientData.Phone = vWord[3];
	ClientData.AccountBalance = stod(vWord[4]);

	return ClientData;
}

void PrintClientData(strClientData ClientData) {

	cout << "Account Number  : " << ClientData.AccountNum << endl;
	cout << "Pin Code        : " << ClientData.PinCinde<< endl;
	cout << "Name            : " << ClientData.Name << endl;
	cout << "Phone           : " << ClientData.Phone<< endl;
	cout << "Account Balance : " << ClientData.AccountBalance << endl;
}

int main() {

	string ClientDataInLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
	cout << "Line Record is :\n" << ClientDataInLine << endl;
	strClientData ClientData = ConvertClientDataFromLine(ClientDataInLine, "#//#");
	cout << "\n\nThe following is the extracted client recored :\n\n";
	PrintClientData(ClientData);

	return 0;
}