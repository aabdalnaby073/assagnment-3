#include <iostream>
#include <vector>
using namespace std;
int n;
int a = (n%10) * ((n%100)/10);
bool bear (int n){
    if ( n == 42){
        return true;
    }
    else if (n < 42){
        return false;
    }
    else if (n % 5 ==0){
        cout << "You had " << n << " bears , And you Got " << 42 << endl;
        bear(n-42);
        return true;
    }
    else if ((n%3 == 0 || n%4 ==0 ) && a ){
        cout << "You had " << n << " bears , And you Got " << a << endl;
        bear(n-a);
        return true;
    }
    else if (n % 2 == 0){
        cout << "You had " << n << " bears , And you Got " << n/2 << endl;
        bear(n/2);
        return true;
    }
    else{
        return false;
    }
}
int main (){
    cout << "Enter number of bears: " << endl;
    cin >> n;
    if (bear(n)){
        cout << "YOU WIN!";
    }
    else{
        cout << "YOU LOSE.";
    }
}
