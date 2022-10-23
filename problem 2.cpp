// Name : Ahmed Mohamed Abdalanby
// ID : 20210035
//Group : B
#include <bits/stdc++.h>
using namespace std;
vector<string> split(string target, char delimiter)
{
    string s = "" ;
    vector<string>v ;
    for (int i = 0 ; i < target.size() ; i++)
    {
        if (target[i] == delimiter)
        {
            v.push_back(s) ;
            s = "" ;
        }
        else if (i == target.size()-1)
        {
             s+=target[i] ;
            v.push_back(s) ;
        }
        else
        {
            s+=target[i] ;
        }

    }
return v ;
}
 int main() {
     string s ;cout << "Enter the string you want to split : \n" ; getline(cin , s);
     char c ; cout << "Enter the char you want to split by : \nNote if you want to split by space enter \"s\"\n" ; cin >>c ;
     if (c == 's'){
     vector<string>ans = {split(s , ' ')} ;
      for (int i = 0 ; i < ans.size() ; i++)
    {
        cout << ans[i] << " " ;
    }
     }
     else {
     vector<string>ans = {split(s , c)} ;

    for (int i = 0 ; i < ans.size() ; i++)
    {
        cout << ans[i] << " " ;
    }
     }
  }
