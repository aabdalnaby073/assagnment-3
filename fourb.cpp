#include <iostream>
#include <vector>
using namespace std;
string prefix;
int k;
static void num(string prefix, int k){
    if (k ==0){
        cout << prefix << endl;
    }
    else {
        num (prefix + "0", k-1);
        num (prefix + "1", k-1);
    }
}
int main() {
    cout << "Enter Prefix: " << endl ;
    cin >> prefix;
    cout << "Enter number: " << endl;
    cin >> k;
    num(prefix , k);
}