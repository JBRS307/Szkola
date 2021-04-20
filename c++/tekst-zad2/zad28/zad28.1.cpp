#include <iostream>
#include <string>

using namespace std;

bool checkIfAPalindrome(string text, int start, int end){
    for(int i = start; i<=end+1; i++){
        if(i == end+1)
            return true;
        if(text[i] != 'A')
            break;
    }
    if(text.length()%2)
        return false;
    if(text[start] == text[end]){
        int mid = start + (end - start)/2;
        if(checkIfAPalindrome(text, start, mid) or checkIfAPalindrome(text, mid+1, end)){
            return true;
        }
    }
    return false;
}

int main(){
    string text;
    cout << "Podaj napis: ";
    cin >> text;

    if(checkIfAPalindrome(text, 0, text.length()-1)){
        cout << "Wyraz jest A-palindromem\n";
    }
    else{
        cout << "Wyraz nie jest A-palindromem\n";
    }

    return 0;
}

//by Jakub Rekas