#include <iostream>
#include <string>

using namespace std;

bool checkIfAPalindrome(string text){
    int end = text.length()-1;
    if(text == "A")
        return true;

    if(text.length()%2 or end == 0)
        return false;
    if(text[0] == text[end]){
        int mid = text.length()/2;
        if(checkIfAPalindrome(text.substr(0, mid)) or checkIfAPalindrome(text.substr(mid, mid))){
            return true;
        }
    }
    return false;
}

int main(){
    string text;
    cout << "Podaj napis: ";
    cin >> text;

    if(checkIfAPalindrome(text)){
        cout << "Wyraz jest A-palindromem\n";
    }
    else{
        cout << "Wyraz nie jest A-palindromem\n";
    }

    return 0;
}

//by Jakub Rekas