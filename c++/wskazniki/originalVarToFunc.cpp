#include <iostream>

using namespace std;

int addition(int *a, int *b){
    return *a+*b;
}

int subtrcaction(int &a, int &b){
    return a-b;
}

void proof(int *a, int &b, int c){
    *a = 11;
    b = 12;
    c = 13;
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    cout << addition(&x, &y) << '\n';
    cout << subtrcaction(x, y) << '\n';
    proof(&x, y, z);
    cout << x << ' ' << y << ' ' << z << '\n';

    return 0;
}