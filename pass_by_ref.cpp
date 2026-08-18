#include <bits/stdc++.h>
using namespace std;

// Pass by reference
void change(int& x) {
    x = 10;
}

int main() {

    int x = 5;

    change(x);

    cout << x << '\n';

    return 0;
}
