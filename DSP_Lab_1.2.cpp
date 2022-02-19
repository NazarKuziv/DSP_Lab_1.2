#include <iostream>

using namespace std;

void Print(int* a)
{
    for (int i = 0; i < 9; i++)
        cout << a[i];
    cout << endl;
}
void OR(int* a, int* b, int* c)
{
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == 1 || b[i] == 1)
            c[i] = 1;
        else
            c[i] = 0;
    }
}
void AND(int* a, int* b, int* c)
{
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == 1 && b[i] == 1)
            c[i] = 1;
        else
            c[i] = 0;
    }
}
void XOR(int* a, int* b, int* c)
{
    for (int i = 0; i < 9; i++)
    {
        if (a[i] != b[i])
            c[i] = 1;
        else
            c[i] = 0;
    }
}
int main()
{
    const int n = 9;
    int a[n] = { 1, 1, 0, 0, 1, 1, 0, 0, 1 };
    int b[n] = { 1, 0, 1, 0, 1, 1, 0, 1, 0 };
    int c[n];

    cout << " A: ";
    Print(a);
   
    cout << " B: ";
    Print(b);
   
    cout << "OR: ";
    OR(a, b, c);
    Print(c);
   
    cout << "AND:";
    AND(a, b, c);
    Print(c);
   
    cout << "XOR:";
    XOR(a, b, c);
    Print(c);
   
}