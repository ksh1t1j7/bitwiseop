/*kshitij yadav 23070123075*/
#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 8;

    int bitwise_and = a & b;
    int bitwise_or = a | b;
    int bitwise_xor = a ^ b;
    int bitwise_not = ~a;

    int left_shift = a << 2;
    int right_shift = a >> 2;

    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT: " << bitwise_not << endl;
    cout << "Left Shift: " << left_shift << endl;
    cout << "Right Shift: " << right_shift << endl;

    return 0;
}
/*
AND: 0
OR: 14
XOR: 14
NOT: -7
Left Shift: 24
Right Shift: 1*/