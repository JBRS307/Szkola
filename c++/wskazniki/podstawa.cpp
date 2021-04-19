#include <iostream>

using namespace std;

int main(){
    int x = 15;
    int *wx = &x;
    
    cout << x << '\n';
    cout << wx << '\n';
    cout << *wx << '\n';

    return 0;
}