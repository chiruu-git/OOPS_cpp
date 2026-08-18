#include <bits/stdc++.h>
using namespace std;

class Car {
public:
    int year;
    string model;
    string manufacture;
    int bhp;
    float price;
};


// Passing object to function
void print(Car c) {
    cout << c.year << " "
         << c.bhp << " "
         << c.manufacture << " "
         << c.model << '\n';
}

int main() {

    Car c1;

    c1.bhp = 70;
    c1.manufacture = "wolksvagon";
    c1.model = "Vento";
    c1.year = 2020;
    c1.price = 800000;


    Car c2;

    c2.bhp = 90;
    c2.manufacture = "tata";
    c2.model = "nexon";
    c2.year = 2025;
    c2.price = 765000;


    Car c3;

    c3.bhp = 110;
    c3.manufacture = "kia";
    c3.model = "sonet";
    c3.year = 2019;
    c3.price = 900000;


    print(c1);
    print(c2);
    print(c3);

    return 0;
}
