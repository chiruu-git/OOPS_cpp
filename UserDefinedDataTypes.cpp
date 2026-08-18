#include <bits/stdc++.h>
using namespace std;

// user defined datatype
class Student{
public:
    
    string name;
    int rno;
    float gpa;
};


// class is a blueprint, something that exists in real world
// class -> collection of things. 
// object is a instance of a class. 
class Car{ 
public:
    int year;
    string model;
    string manufacture;
    int bhp;
    float price;
};


//passing object to functions
void print(Car c){
    cout << c.year << " " << c.bhp << " " 
    << c.manufacture <<" " << c.model << " " << '\n';
}


// pass by reference.
void change(int& x){
    x = 10;

}

int main(){
    int  x = 10;
    change(x);
    cout << x << '\n';


    Student s1;
    // s1 is object of class student
    // object contain diff details. 
    s1.name = "chirag";
    s1.rno = 19;
    // cin >> s1.rno;
    s1.gpa = 7.5;

    Student s2;
    s2.name = "anand";
    s2.rno = 29;
    s2.gpa = 6.5;

    // cout << s1.rno << '\n';
    Car c1;
    c1.bhp = 70;
    c1.manufacture = "wolksvagon";
    c1.model = "Vento";
    c1.year  = 2020;
    c1.price = 800000;

    Car c2;
    c2.bhp = 90;
    c2.manufacture = "tata";
    c2.model = "nexon";
    c2.year  = 2025;
    c2.price = 765000;

    Car c3;
    c3.bhp = 110;
    c3.manufacture = "kia";
    c3.model = "sonet";
    c3.year  = 2019;
    c3.price = 900000;

    // cout << c1.bhp << '\n';     
    // to print all in a single function
    // print(c1);
    // print(c2);
    // print(c3);
    return 0;
}