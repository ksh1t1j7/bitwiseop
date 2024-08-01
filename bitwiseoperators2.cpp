//kshitij yadav 23070123075
#include <iostream>
using namespace std;

int main() {
    int i = 50; // (110010)
    int bit_to_be_set;
    int set;
    int reset;
    int bit_to_be_reset;

    cout << "Enter the Bit Position to be set: ";
    cin >> bit_to_be_set;

    set = i | (1 << bit_to_be_set);

    cout << "Enter the Bit Position to be reset: ";
    cin >> bit_to_be_reset;

    reset = i & ~(1 << bit_to_be_reset);

    cout << "Your number after setting the bit is: " << set << endl;
    cout << "Your number after resetting the bit is: " << reset << endl;

    return 0;
}
/*
Enter the Bit Position to be set: 3
Enter the Bit Position to be reset: 2
Your number after setting the bit is: 58
Your number after resetting the bit is: 46
*/
