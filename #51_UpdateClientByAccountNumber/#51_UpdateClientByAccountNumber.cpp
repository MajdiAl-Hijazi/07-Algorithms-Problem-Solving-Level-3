#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient {

	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = false;