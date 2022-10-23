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
            target[i] = tolower(target[i]) ;
             s+=target[i] ;
            v.push_back(s) ;
        }
        else
        {
            target[i] = tolower(target[i]) ;
            s+=target[i] ;
        }

    }
return v ;
}
 int main() {
vector<string>scamming_dictionary = {"cryptocurrency" , "online" , "shopping" , "COVID-19" , "bank" , "account" , "apple" , "netflix" , "facebook" , "urgent" , "Verification", "required!" , "Invoice" ,"required" , "password" , "email" , "pan" , "vcc" , "send" , "visa" , "microsoft" , "alahly" , "masr" ,
"whatsapp" , "mobile" , "number" , "id" , "document" , "copy" , "delivery" , "ticket"} ;
cout << "\t\t\t\tATTINTION!!\nthis program is help tool not  accurate 100% it only help you to take care\n" ;
string email ; getline (cin , email) ;
int total = 0 ;
map<string , int > mp ;
vector<string> inbox = {split(email , ' ')} ;
for (int i = 0 ; i < inbox.size() ; i++)
{
    for (int j = 0 ; j < scamming_dictionary.size() ; j++ )
    {

        if (inbox[i] == scamming_dictionary[j])
        {
            total++;
            mp[scamming_dictionary[j]]++;
        }
    }
}
if (total < 5)
{
    cout << "Normal email\n" ;
}
else if ( total >= 5 && total < 10)
{
    cout << "1pt\n" ;
    cout << "the words which are in the massage\n" ;
    map<string , int>::iterator it ;
    for (it = mp.begin() ; it != mp.end() ;it++)
    {
        cout << it->first << "\t\t" << it->second << endl ;
    }
}
else if ( total >= 10 && total < 20)
{
    cout << "2pt\n" ;
    cout << "the words which are in the massage\n" ;
    map<string , int>::iterator it ;
    for (it = mp.begin() ; it != mp.end() ;it++)
    {
        cout << it->first << "\t\t" << it->second << endl ;
    }
}
else if ( total >= 20 && total <= 30)
{
    cout << "3pt\n" ;
    cout << "the words which are in the massage\n" ;
    map<string , int>::iterator it ;
    for (it = mp.begin() ; it != mp.end() ;it++)
    {
        cout << it->first << "\t\t" << it->second << endl ;
    }
}
}

