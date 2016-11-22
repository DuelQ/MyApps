#include <iostream>
#include <cstdio>
    using namespace std;
int main()
{
    int liczba1;
    int liczba2;
    int numer;
    int wynik;
   
    do
    {   cout<<"Podaj numer dzialania: "<<endl;
        cout << "[1] Dodawanie" << endl;
        cout << "[2] Odejmowanie" << endl;
        cout << "[3] Mnozenie" << endl;
        cout << "[4] Dzielenie" << endl;
        cout << "[5] Rezygnuj" << endl;
        cin >> numer;
        switch( numer )
        {
        case 1:
            {
          cout << "Podaj liczbe: " <<endl;
            cin >> liczba1;
            cout << "Podaj liczbe: "<<endl;
              cin >> liczba2;
                wynik = liczba1 + liczba2;
              cout << "wynik: " << wynik<<endl;
                break;
            }
            {
            case 2:
             cout << "Podaj liczbe: " <<endl;
               cin >> liczba1;
              cout << "Podaj liczbe: "<<endl;
               cin >> liczba2;
                wynik = liczba1 - liczba2;
               cout << "wynik: " << wynik<<endl;
                break;
            }
            {
            case 3:
           cout << "Podaj liczbe: " <<endl;
               cin >> liczba1;
              cout << "Podaj liczbe:"<<endl;
               cin >> liczba2;
                wynik = liczba1 * liczba2;
              cout << "wynik: " << wynik<<endl;
                break;
            }
            {
            case 4:
            cout << "Podaj liczbe: "<<endl;
             cin >> liczba1;
             cout << "Podaj liczbe: "<<endl;
               cin >> liczba2;
                if( liczba2 == 0 )
                   cout << "Dzielnik nie moze byc zerem!";
                else;
               
                wynik = liczba1 / liczba2;
                cout << "wynik: " << wynik<<endl;
                break;
            }
        }
    } while( liczba1 != 0 );
   
    return 0;
}
