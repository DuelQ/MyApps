#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int liczba;int strzal;int proba= 0;
int main()
{ 
cout<<"Pomyslalem liczbe z zakresu od 1 do 100, zgadnij ja! "<<endl;
 srand(time(NULL));
 liczba=rand()%100+1;
    do
    { 
        proba++;
       cout<<"Zgadnij liczbe: (To twoja "<<proba<<" proba)"<<endl;
       cin>>strzal;
       if(strzal==liczba)
        cout<<"Gratulacje, udalo ci sie zgadnac za "<<proba<<" razem"<<endl;
       if(strzal<liczba)
     cout<<"Za malo!"<<endl;
       if(strzal>liczba)
     cout<<"To za duzo!"<<endl;
    } while(strzal != liczba);
    getchar();getchar();
return 0;
}