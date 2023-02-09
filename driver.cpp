#include <iostream>
#include <fstream>
#include <cstdint>
using namespace std;

int main()
{
    string fileName = "input.txt";
    ifstream reader;
    reader.open(fileName);

    string operation, operand1, operand2;
    while (reader >> operation >> operand1 >> operand2)
    {
        unsigned long check = stoul(operand1, 0, 16) + stoul(operand2, 0, 16);
        uint32_t output = stoul(operand1, 0, 16) + stoul(operand2, 0, 16);

        cout << hex << "0x" << output << endl;
        if (output != check)
        {
            cout << "Overflow: yes" << endl;
        }
        else
        {
            cout << "Overflow: no" << endl;
        }
    }

    return 0;
}