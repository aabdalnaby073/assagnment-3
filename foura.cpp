#include <iostream>
#include <vector>
using namespace std;
int num;
static void bin(int n){
    if (n == 0){
        cout << '0';
    }
    else {
        bin(n/2);
        if(n%2 == 0){
            cout << '0';
        }
        else{
            cout << '1';
        }
    }
}
int main() {
    cin >> num;
    cout << "n = " << num << "     " << "output : " ;
    bin(num) ;
}