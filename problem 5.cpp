#include <bits/stdc++.h>
using namespace std;
struct dominoT
{
    int leftdomino;
    int rightdomino;
};
bool FormsDominoChain(vector<dominoT> & dominos)
{
    map<int,int>m ;
    vector<int>el_Bafaat ;
    int odds = 0 ;
    for (int i = 0 ; i < dominos.size() ; i++)
    {
        if (dominos[i].leftdomino == dominos[i].rightdomino )
   {
       //m[dominos[i].rightdomino]++;
       el_Bafaat.push_back(dominos[i].leftdomino) ;
   }
   else
   {
       m[dominos[i].rightdomino]++;
       m[dominos[i].leftdomino]++;
   }
    }
    map<int,int>::iterator it ;
for (it = m.begin() ; it!=m.end() ; it++)
{
    bool isbafa = false ;
    for (int i = 0 ; i < el_Bafaat.size() ; i++) {
            if (it->second == el_Bafaat[i])
            {
                isbafa = true;
            }
            else
            {
                isbafa = false ;
            }

        }
    if (it->second % 2 !=0 && !isbafa)
    {
        odds++ ;
    }

}
if (odds > 2)
    return false ;
else
    return true ;

}
int main()
{
dominoT dominosquare ;
vector<dominoT>v ;
map<int,int>m ;
int lside , rside  ;
cout << "Enter number of dominos you want to check : \n" ;
int n ; cin >> n ;
for (int i = 0 ; i < n ; i++)
{
   cin >> lside >> rside ;
   if (lside > 6 || rside>6)
   {
       cout << "Wrong domino card\n" ;
       return 0 ;
   }
   dominosquare.leftdomino = lside ;
   dominosquare.rightdomino = rside ;
   v.push_back(dominosquare) ;
}
cout << FormsDominoChain(v) ;
}
