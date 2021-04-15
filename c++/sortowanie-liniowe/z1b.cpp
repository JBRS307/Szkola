#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int WMIN;
    int WMAX;
    int N;
    cout << "Podaj granice dolna i gorna: ";
    cin >> WMIN >> WMAX;
    cout << "Podaj liczbe elementow: ";
    cin>> N;
    int d[N],lw[WMAX - WMIN + 1];


    srand(time(NULL));

    for(int i=0; i<N; i++)
    {
        d[i]=WMIN+rand()%(WMAX-WMIN+1);
    }

    cout << "Przed sortowaniem:\n";
    for(int i=0; i<N; i++)
    {
        cout << d[i] << ' ';
    }
    cout << '\n';


    for(int i=WMIN; i<=WMAX; i++)
    {
        lw[i-WMIN]=0;
    }

    for(int i=0; i<N; i++)
    {
        lw[d[i]-WMIN]++;
    }
    int j=0;
    for(int i=WMIN; i<=WMAX; i++)
    {
        while(lw[i-WMIN]--)
        {
            d[j++]=i;
        }
    }

    cout << "Po sortowaniu:\n";
    for(int i=0; i<N; i++)
    {
        cout << d[i] << ' ';
    }

    cout << '\n';
    return 0;
}
