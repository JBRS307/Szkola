#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

void printList(list<int> temp){
    for(list<int>::iterator it = temp.begin(); it != temp.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
}

int main(){
    srand(time(0));
    list<int> temp;

    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        temp.push_back(rand()%100+1);
    }

    printList(temp);
    cout << "Dodaj element do listy: ";
    int x;
    cin >> x;
    temp.push_back(x);
    printList(temp);
    cout << "Usuwamy ostatni i pierwszy element z listy:";
    temp.pop_back();
    temp.pop_front();
    getchar();
    getchar();
    printList(temp);
    int pos;
    list<int>::iterator it = temp.begin();
    cout << "Wstaw element na dowolna pozycje wiedzac, ze dlugosc listy wynosi " << temp.size() << ":\n";
    cout << "Pozycja: ";
    cin >> pos;
    for(int i = 0; i < pos; i++){
        it++;
    }
    cout << "Wartosc: ";
    cin >> x;
    temp.insert(it, x);
    printList(temp);

    return 0;
}