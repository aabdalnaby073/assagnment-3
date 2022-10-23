#include <bits/stdc++.h>
using namespace std;
class triangle
{
   private:
    double decint ;
    string decstr ;
    list<int>ls ;
    vector<char>v ;
public:
    triangle  (long long x = 0  )
    {

        string s = to_string(x) ;
        for (int i = 0 ; i < s.size() ; i++)
        {
            v.push_back(s[i]) ;
        }
    }
    triangle (string s )
    {
         if (((s[0] == '+' || s[0] == '-') && (s[1] == '-' || s[1]=='+'))|| s[1] == ' ')
    {
        cout << "Wrong input \nrejected"<<endl ;
    }
    else{
    for (int i = 0 ; i < s.size() ; i++)
    {
        v.push_back(s[i]) ;
    }
    }
    }
    triangle operator + (triangle x)
    {
        triangle c5 ;
        int carry = 0 ;
        if (v.size() < x.v.size())
            {
                while (v.size() < x.v.size())
                {
                    v.insert(v.begin(),'0') ;
                }
            }
            else if (v.size() > x.v.size())
            {
                while (v.size() > x.v.size())
                {
                    x.v.insert(x.v.begin(),'0') ;
                }
            }
         for (int i = v.size()-1 ; i >= 0 ; i--)
         {
            int z = v[i] - '0' , y = x.v[i] - '0';
            if (z+y+carry > 9)
            {
                 c5.ls.push_front((z+y+carry)-10) ;
                carry = 1 ;

            }
           else if (z+y+carry <10)
           {
            c5.ls.push_front(z+y+carry) ;
            carry = 0 ;
           }

         }

         if (carry)
         {
             c5.ls.push_front(carry) ;
         }

        return c5 ;
    }
    void showdata()
    {
        list<int>::iterator it ;
        for (it = ls.begin() ; it != ls.end() ; it++)
        {
            cout << *it  ;
        }
    }

};
int main()
{
triangle c1("99"), c2("3") , c3 ;
c3 = c1 + c2 ;
c3.showdata() ;
}
