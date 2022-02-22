#include <iostream>
using namespace std;

int encode(int a)
{
    //Separate individual digits into integers
    int first = a / 1000;
    int second = (a % 1000) / 100;
    int third = (a % 100) / 10;
    int fourth = a % 10;

    //Add 4 to each digit and get the remainder after dividing by 10
    first = (first + 4) % 10;
    second = (second + 4) % 10;
    third = (third + 4) % 10;
    fourth = (fourth + 4) % 10;
    return (third * 1000 + fourth * 100 + first * 10 + second);   // swap first with third and second with fourth
}

int decode( int a)
{
    //Separate individual digits into integers
    int first = (a / 1000);
    int second = (a % 1000) / 100;
    int third = (a % 100) / 10;
    int fourth = (a % 10);

    //Subtract 4 from each digit and get remainder after dividing by 10
    first = (first - 4) % 10;
    second = (second - 4) % 10;
    third = (third - 4) % 10;
    fourth = (fourth - 4) % 10;
    return (third * 1000 + fourth * 100 + first * 10 + second);
}

int main()
{
    int input;
    cout << "Please enter a 4 digit positive number: ";
    cin >> input;
    cout << "Encrypted number: " << encode(input)<< endl;
    cout << "Number decrypted: " << decode(encode(input)) << endl;
}