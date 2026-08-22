// classes, objects - access specifiers - getter setter
#include <bits/stdc++.h>
using namespace std;


/* 
diffent access modifiers in cpp 
- public
- private ( by default )
- protected ( used when inheritance) 
 */

class Teacher{
private:
    double salary;

public:
    string name;
    int age;
    // double salary;
    string department;

    //setter
    void setter(double s){
        salary = s;
    }
    // getter
    double getter(){
        return salary;
    }


};

void print(Teacher t){
    cout << t.age << " " << t.name << " " << t.department << " " << t.getter()<< '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Teacher obj1;

    obj1.age = 18;
    obj1.name  = "Chirag";
    obj1.department = "Maths";
    obj1.setter(90.011);

    print(obj1);
    
    return 0;
}