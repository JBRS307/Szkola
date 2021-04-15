/*
Dane: int number - numer z dziennika, wpisany przez użytkownika
      int arr[26] - 26 elementowa tablica z ostatnim elementem 0, który jest wartownikiem
Wynik: int pos - pierwsza pozycja, na której wystąpi szukany numer lub komunikat o jego braku
*/
//===========================================================================
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//W poleceniu nikt nie raczył doprecyzować czy chodzi o wszystkie wystąpienia, czy tylko o pierwsze,
//więc uznam, że tylko o pierwsze

int findPos(int number, int arr[]){
    int watch = 0;
    int pos = 0;
    while(*arr != number and *arr != watch){
        arr++;
        pos++;
    }
    return pos;
}

int main(){
    srand(time(NULL));
    int arr[26];
    int number;

    cout << "Podaj numer z dziennika: ";
    cin >> number;

    for(int i = 0; i<25; i++){
        arr[i] = rand()%(number+30)+1;
    }
    arr[25] = 0;

    for(int i = 0; i<26; i++){ //wypisywanie tablicy, żeby sprawdzić czy działa
        cout << arr[i] << ' ';
    }
    cout << '\n';

    int pos = findPos(number, arr);

    if(pos == 25){
        cout << "Nie znaleziono liczby!" << '\n';
    }
    else{
        cout << "Szukana liczba znajduje sie na pozycji " << pos << "!\n";
    }

    return 0;
}