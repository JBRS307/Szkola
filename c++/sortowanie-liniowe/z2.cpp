#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printArr(int *arr, int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void countingSort(int *arr, int size, int maxItem, int minItem){
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
    int houses;
    cout << "Podaj numer z dziennika: ";
    cin >> houses;
    houses += 25;
    int fields[houses];
    int thefts[houses];
    for(int i = 0; i<houses; i++){
        fields[i] = rand()%71+30;
    }
    
    //cout << "Nieposortowane dzialki:\n";
    //printArr(fields, houses);

    countingSort(fields, houses, 100+1, 30);

    //cout << "Posortowane dzialki:\n";
    //printArr(fields, houses);

    for(int i = 0; i<houses; i++){
        thefts[i] = fields[i]*100*30;
    }

    cout << "Posortowane podatki:\n";
    printArr(thefts, houses);

    return 0;
}