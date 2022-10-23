// Name : Abdelrahman Sameh Nabway
// ID :20210226
// Group : B
// Problem no. : 6


#include <iostream>
#include <cmath>
using namespace std;
bool PowerOfTwo(int n)
{
    if ((n & (n - 1)) == 0 && n != 1)
        return true;
    return false;
}
int star(int n)
{
    int i = n, ans = 0;
    while (i % 2 == 0)
    {
        i /= 2;
        ans++;
    }
    return pow(2, ans);
}
int spaces(int n)
{
    if (PowerOfTwo(n) == true)
        return 0;
    return (n - 1) / 2;
}
void printpattern(int n)
{
    int i, sp, st;
    sp = spaces(n);
    for (i = 1; i <= sp; i++)
        cout << " ";
    st = star(n);
    for (i = 1; i <= st; i++)
        cout << "* ";
}
void pattern(int n)
{
    int i, j, sp;
    for (i = 1; i <= n; i++)               //Upper Half    
    {
        printpattern(i);
        cout << endl;
    }
    sp = n / 2;
    for (i = 1; i <= n - 1; i++)             //Lower Half
    {
        for (j = 1; j <= sp; j++)
            cout << " ";
        printpattern(i);
        cout << endl;
    }
}
int main()
{
    int n = 8;
    pattern(n);
    return 0;
}