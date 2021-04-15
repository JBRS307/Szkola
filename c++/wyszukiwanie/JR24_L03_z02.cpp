/*
Dane: int jNumber - numer z dziennika
      int divider - dzielnik, którego podzielność sprawdzamy
      int arr[30] -30-elementowa tablica
Wynik: arr[pos] - liczba, która dzieli się przez dzielnik
       pos - pozycja, na której dzielnik znajduje się w tablicy
*/
//=========================================================================
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//jak ostatnio, szukam pierwszego

int findDividable(int arr[], int divider){
    int pos = 0;
    while(pos < 30){
        if(*arr%divider == 0){
            return pos;
        }
        pos++;
        arr++;
    }
    return -1;
}

int main(){
    srand(time(NULL));
    int arr[30];
    int jNumber, divider;

    cout << "Podaj numer z dziennika: ";
    cin >> jNumber;
    if(jNumber > 99){
        return 0;
    }
    jNumber++;
    cout << "Podaj liczbe, przez ktora chcesz dzielic: ";
    cin >> divider;

    for(int i = 0; i<30; i++){
        arr[i] = rand()%(101-jNumber)+jNumber;
        cout << arr[i] << ' ';
    }cout << '\n'; //wypisanie tablicy

    int pos = findDividable(arr, divider);
    if(pos == -1){
        cout << "Nie znaleziono liczby podzielnej przez " << divider << "!\n";
    }
    else{
        cout << "Znaleziono liczbe " << arr[pos] << " na pozycji " << pos << "!\n";
    }

    return 0;
}