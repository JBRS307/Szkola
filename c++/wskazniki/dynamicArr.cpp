#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void getArr(int *arr, int size){
    for(int i = 0; i < size; i++, arr++){
        *arr = rand()%100+1;
    }
}

void printArr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main(){
    srand(time(0));
    int *arr;
    int size;
    cin >> size;
    arr = new int [size];
    
    getArr(arr, size);
    printArr(arr, size);

    delete [] arr;

    cin >> size;
    arr = new int [size];

    getArr(arr, size);
    printArr(arr, size);

    cout << *(arr+1) << '\n';

    delete [] arr;

    return 0;
}