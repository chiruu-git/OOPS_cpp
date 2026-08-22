// encapsulation is wrapping data and member functions in a 
// single unit called class
/* 
    ---------------------------------
    |   Data &     |    Member      |
    |  Properties  |    Functions   |
    ---------------------------------
 */

// data hiding --> use private
#include <bits/stdc++.h>
using namespace std;


class Account{
    // data hiding in encapsulation
private:
    double balance;
    string pass;

public:
    string accountId;
    string username;
   

    //setter
    void setter(double b, string p){
        balance = b;
        pass = p;
    }

    // balance getter;
    double bal(){
        return balance;
    }
    //password getter
    string pas(){
        return pass;
    }
};




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Account a1;
    a1.accountId  = "90828";
    a1.username = "chirag11";
    a1.setter(129.9, "Chiru1223");
    cout << a1.accountId <<'\n';

    // to access balance we can use getter and setter functions
    cout << a1.bal() << " " << a1.pas() << '\n';
    return 0;
}