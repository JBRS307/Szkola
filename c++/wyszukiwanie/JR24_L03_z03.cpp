/*
Dane: int size - rozmiar tablicy
      int arr[size] - tablica o rozmiarze size
Wynik: int *Max - maksymalny element tablicy
*/
//========================================================================
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    srand(time(NULL));
    int size;
    cout << "Podaj ile liczb chcesz wylosowac: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i<size; i++){
        arr[i] = rand()%100+1;
        cout << arr[i] << ' ';
    }cout << '\n'; //wypisywanie tablicy

    int *Max = max_element(arr, arr+size); //klasyczna metoda wyszukiwania elementu maksymalnego - można tak
    cout << *Max << '\n';

    return 0;
}