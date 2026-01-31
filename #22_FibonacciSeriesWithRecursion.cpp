#include <iostream>
using namespace std;

void PrintFibonacciUsingRecursion(short Number, int Prev1, int Prev2)
{
    if (Number > 0)
    {
        int FebNumber = Prev1 + Prev2;
        cout << FebNumber << " ";

        PrintFibonacciUsingRecursion(Number - 1, FebNumber, Prev1);
    }
}

int main()
{
    cout << "Fibonacci sequence: ";
    PrintFibonacciUsingRecursion(10, 0, 1);

    system("pause>0");
}
