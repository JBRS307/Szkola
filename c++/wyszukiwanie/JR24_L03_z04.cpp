/*
Dane: int size - numer z dziennika powiększony o 20
      int arr[size] - tablica o rozmiarze size
Wynik: Lider zbioru lub komunikat o jego braku
*/
//=============================================================================
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

//Żeby sprawdzić działanie trzeba wpisywać liczby ujemne np. -15, -16, bo w innych wypadkach wylosowanie zbioru,
//który miałby lidera rzadko się zdarza

int main(){
    srand(time(NULL));
    int size;
    cout << "Podaj swoj numer z dziennika: ";
    cin >> size;
    size += 20;
    int arr[size];

    for(int i = 0; i<size; i++){
        arr[i] = rand()%4+1;
        cout << arr[i] << ' ';
    }cout << '\n'; //wypisywanie tablicy

    for(int i = 0; i<4; i++){
        if(count(arr, arr+size, i+1)>size/2){
            cout << "Liderem zbioru jest " << i+1 << "!\n";
            return 0;
        }
    }
    cout << "Zbior nie ma lidera!\n";

    return 0;
}