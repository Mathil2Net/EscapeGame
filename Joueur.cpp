#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include "Joueur.h"
#include "Fonction.h"

using namespace std;

void Joueur::Set_Name() {
    cout << "Veuillez entrer le nom de votre personnage" << endl;
    cin >> Name;
}

void Joueur::Set_Nb_Player(int nb_player){
    Nb_Player = nb_player;
}

std::string Joueur::Get_Name() {
    return Name;
}

void Joueur::Get_Item() {
    cout <<endl;
    cout << " - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - - " << endl;
    cout <<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<<" -"<<char(92)<<"     "<<char(47)<<"-      "<< endl;
    for(int n : v) {
            Items(n);
    }
    cout <<endl;
    cout <<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<<" -"<<char(47)<<"     "<<char(92)<<"-      "<< endl;
    cout << " - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - -       - - - - - " << endl;
    cout << endl;
}

void Joueur::Set_Item(int item) {
string choix;
int h;
int n = 10;
int Emp;

do{
    n-=1;
    h = v[n];
}
    while(h != item && n !=0);

    if(item == 0){
        cout<<n;
        if(v[0] == 0 && n != 0){
          v[n+1]=item;
        }
        else if(v[0] == 0 && n == 0){
          v[n+1]=item;
        }
        else{
        v[n]=item;
        }
        Cheat +=1;
        Get_Item();
    }

           else if (h == item){
           cout << "Vous avez deja l'item : " << item << endl;
           Get_Item();
           }
           else {
               do {
                   cout<< "Voulez-vous enregistrer l'item ? (Y or N) " << endl;
                   cin>> choix;
                   cin.clear();
                   cin.ignore(10000, '\n');
                  }
                   while(choix != "Y"   && choix != "y" && choix != "N"  && choix != "n" );
                   if (choix == "Y"  || choix == "y"){
                       Get_Item();

                       do {
                           cout<< "A quel emplacement voulez vous le mettre ? (1 to 10 ) " << endl;
                           cin>>Emp;
                           cin.clear();
                           cin.ignore(10000, '\n');
                       }
                       while(Emp<Cheat || Emp>10);
                       v[Emp-1]=item;
                       Get_Item();
                       }
           }
}

int Joueur::Set_ItemFromPlayer() {
int SentJoueur;
int c;
string Motcle;
            do {
                cout<<endl<<"Qui vous envoie l'item ?"<<endl;
                cin>>SentJoueur;
                cin.clear();
                cin.ignore(10000, '\n');
            }
            while(SentJoueur<1 || SentJoueur>4);
            cout<< "Le joueur "<<SentJoueur<<" vas vous envoyer un item"<<endl;

            switch(Nb_Player){
                case 1:
                    switch(SentJoueur){
                        case 2:
                        Nb_SentP2 +=1;
                            break;
                        case 3:
                        Nb_SentP3 +=1;
                            break;
                        case 4:
                        Nb_SentP4 +=1;
                            break;
                    }
                    break;
                case 2:
                    switch(SentJoueur){
                        case 1:
                        Nb_SentP1 +=1;
                            break;
                        case 3:
                        Nb_SentP3 +=1;
                            break;
                        case 4:
                        Nb_SentP4 +=1;
                            break;
                    }
                    break;
                case 3:
                    switch(SentJoueur){
                        case 1:
                        Nb_SentP1 +=1;
                            break;
                        case 2:
                        Nb_SentP2 +=1;
                            break;
                        case 4:
                        Nb_SentP4 +=1;
                            break;
                    }
                    break;
                case 4:
                    switch(SentJoueur){
                        case 1:
                        Nb_SentP1 +=1;
                            break;
                        case 2:
                        Nb_SentP2 +=1;
                            break;
                        case 3:
                        Nb_SentP3 +=1;
                            break;
                    }
                    break;
            }
            switch(SentJoueur){
                case 1:
                c = Nb_SentP1;
                    break;
                case 2:
                c = Nb_SentP2;
                    break;
                case 3:
                c = Nb_SentP3;
                    break;
                case 4:
                c = Nb_SentP4;
                    break;
            }

            cout<<"Tapez le mot clef";
            cin>>Motcle;

            int length = Motcle.length();
            char tab[length];
            cout << "Phrase decryptee : ";
            for (int i = 0; i < length; i++) {
                    tab[i] = Motcle[i]-c;
                    cout << tab[i];

             }
            int b = atoi(tab);

            cout << endl;
            if(b>=1 && b<=10){
                return b;
            }
            else{
                b = 0;
                return b;
            }
}

void Joueur::Send_ItemToPlayer(){
    int SentJoueur;
    int SentItem;
    int c;
    string Motcle;
    do {
           cout<< "A quel joueur voulez-vous envoyer un item ?";
           cin>>SentJoueur;
           cin.clear();
           cin.ignore(10000, '\n');
    }
       while(SentJoueur<1 || SentJoueur>4);

       switch(Nb_Player){
           case 1:
               switch(SentJoueur){
                   case 2:
                   Nb_SentP2 +=1;
                       break;
                   case 3:
                   Nb_SentP3 +=1;
                       break;
                   case 4:
                   Nb_SentP4 +=1;
                       break;
               }
               break;
           case 2:
               switch(SentJoueur){
                   case 1:
                   Nb_SentP1 +=1;
                       break;
                   case 3:
                   Nb_SentP3 +=1;
                       break;
                   case 4:
                   Nb_SentP4 +=1;
                       break;
               }
               break;
           case 3:
               switch(SentJoueur){
                   case 1:
                   Nb_SentP1 +=1;
                       break;
                   case 2:
                   Nb_SentP2 +=1;
                       break;
                   case 4:
                   Nb_SentP4 +=1;
                       break;
               }
               break;
           case 4:
               switch(SentJoueur){
                   case 1:
                   Nb_SentP1 +=1;
                       break;
                   case 2:
                   Nb_SentP2 +=1;
                       break;
                   case 3:
                   Nb_SentP3 +=1;
                       break;
               }
               break;
       }
       switch(SentJoueur){
           case 1:
           c = Nb_SentP1;
               break;
           case 2:
           c = Nb_SentP2;
               break;
           case 3:
           c = Nb_SentP3;
               break;
           case 4:
           c = Nb_SentP4;
               break;
       }
       Get_Item();
             do {
                    cout<<"Quel item voulez vous envoyer ?";
                    cin>>SentItem;
                    cin.clear();
                    cin.ignore(10000, '\n');
             }
                while(SentItem<Cheat || SentItem>10);
                v[SentItem-1]=1;
                cout<<c;
                string str= to_string(SentItem);
         int length = str.length();
         char tab[length];
       cout << "Phrase cryptee : ";
         for (int i = 0; i < length; i++) {
                 tab[i] = str[i]+c;
                 cout << tab[i];
          }
         cout << endl;

}

void Joueur::Set_Position(double &position) {
    Position = position;
}
double Joueur::Get_Position() {
    return Position;
}
