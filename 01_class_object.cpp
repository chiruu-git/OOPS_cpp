#include <bits/stdc++.h>
using namespace std;

// User defined datatype
class Student {
public:
    string name;
    int rno;
    float gpa;
};

class Car {
public:
    int year;
    string model;
    string manufacture;
    int bhp;
    float price;
};

int main() {

    Student s1;

    s1.name = "chirag";
    s1.rno = 19;
    s1.gpa = 7.5;

    Student s2;

    s2.name = "anand";
    s2.rno = 29;
    s2.gpa = 6.5;


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


    cout << s1.name << " " << s1.rno << " " << s1.gpa << '\n';

    return 0;
}
