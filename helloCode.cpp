#include <iostream>
using namespace std;

void Print_Words(int a);
int main()
{
    int a;
    int i;
    cout << "In this code you will be asked to input how many times you want to output Hello World" << endl;
    cin >> a;//a is the amount of times that will output Hello World
    cout << "you will print Hello World " << a << " times." << endl;
    Print_Words(a);


    return 0;
}
void Print_Words(int a)
{
    
    for (int i = 0; i < a; i++) {
        cout << "Hello World\n";
    }
}
