#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void getArr(int *arr, int size){
    for(int i = 0; i<size; i++){
        arr[i] = rand()%41;
    }
}

void printArr(int *arr, int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void countingSort(int *arr, int size, int maxItem){
    int temp[maxItem] = {0};
    int sortedArr[size];
    for(int i = 0; i<size; i++){
        temp[arr[i]]++;
    }
    for(int i = 1; i<maxItem; i++){
        temp[i] += temp[i-1];
    }
    for(int i = size-1; i >= 0; i--){
        sortedArr[temp[arr[i]]-1] = arr[i];
        temp[arr[i]]--;
    }
    for(int i = 0; i<size; i++){
        arr[i] = sortedArr[i];
    }
}

int main(){
    srand(time(NULL));
    int size;
    cout << "Podaj numer z dziennika: ";
    cin >> size;
    size +=5;
    int arr[size];

    getArr(arr, size);
    cout << "Tablica nieposortowana:\n";
    printArr(arr, size);

    countingSort(arr, size, 40+1);

    cout << "Tablica posortowana:\n";
    printArr(arr, size);

    return 0;
}