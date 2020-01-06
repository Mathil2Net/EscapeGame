#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "Joueur.h"
#include "Fonction.h"
void AllTeTime(int &Room);

using namespace std;

int main()
{
   system("mode 650");
   int choix = 0;
   int action = 0;
   int Room = 1;
   string Tuto;
   string mission;
   string Personnages[4] = {"Perso1","Perso2","Perso3","Perso4"};

   cout<<"Bonjour et Bienvenue "<<char(133)<<" PlankalK"<<char(129)<<"l."<<endl<<endl;
   cout<<" Nous vous avons amen"<<char(130)<<" "<<char(133)<<" 3000 m sous terre dans cette ancienne mine de cuivre en plein"
         " coeur de l"<<char(39)<<"Alaska.\n Nous ne sommes pas ici pour extraire de l"<<char(39)<<"or mais belle et bien pour"
         " interpreter la mati"<<char(138)<<"re.\n Ici tout bouge tr"<<char(130)<<"s vite, vous "<<char(136)<<"tes en plein coeur d"<<char(39)<<"un ordinateur !"<<endl<<endl;
   cout<<" Nous vous avons inculqu"<<char(130)<<" des m"<<char(130)<<"canismes pr"<<char(130)<<"sent ici dans vos habitudes de vie. Nous vous\n"
         " avons suivis et nous avons guid"<<char(130)<<" vos choix afin que vous puissiez d"<<char(130)<<"velopper des comp"<<char(130)<<"tences\n sp"<<char(130)<<"cifiques qui vous permettront de d"<<char(130)<<"crypter ce nouveau langage."
         " Aujourd"<<char(39)<<"hui, vous "<<char(136)<<"tes pr"<<char(136)<<"t!"<<endl<<endl;
   cout<<" Tous les 4, vous n"<<char(39)<<"avez aucun point commun "<<char(133)<<" part ce langage que nous vous avons instruit, nous appelons : l"<<char(39)<<"Orient"<<char(130)<<" Objet. \n"
         " Aujourd"<<char(39)<<"hui, je vous demande une chose tr"<<char(130)<<"s simple, remplir les 10 cases du tableau que vous aller d"<<char(130)<<"couvir dans la salle Tesla. \n"
         " Le seul indice que nous proc"<<char(130)<<"dons, est le nombre PI.\n"<<endl;
   cout<<"      Bon jeu!"<<endl<<endl;

   do {
       cout<<"Acceptez-vous la mission ? (Y or N) : ";
       cin>>mission;
       cin.clear();
       cin.ignore(10000, '\n');
   }
   while(mission!="Y" && mission!="y" && mission!= "N" && mission!="n" );
   if(mission == "N"  || mission == "n"){
       cout<<"Good Bye !"<<endl;
   return 0;
   }

   do {

       cout << "Voulez vous parcourir le tutoriel ? (Y or N)" << endl;
       cin >> Tuto;
       cin.clear();
       cin.ignore(10000, '\n');
       }
       while(Tuto != "Y"   && Tuto != "y" && Tuto != "N"  && Tuto != "n" );

       if (Tuto == "Y"  || Tuto == "y"){
       Joueur Test;
       Tutoriel(Room);
       string choose;
       cout << "    Press [P] to show your Item's, Press [M] to show your MAP  "<< endl;
       cin >> choose;
       if (choose == "P" || choose == "p") {
           Test.Get_Item();
       }
       else if(choose == "M" || choose == "m") {
           carte(Room);
       }
       system("pause");
       }

   do {
       cout<<endl<<"Veuillez s"<<char(130)<<"lectionner un personnage :"<<endl<<endl<<" 1: Perso1 -> Tr"<<char(138)<<"s d"<<char(130)<<"vou"<<char(130)<<", il a l"<<char(39)<<"oeil partout,"<<endl<<" 2: Perso2 -> La soif d"<<char(39)<<"apprendre, il saura tout d"<<char(130)<<"chiffrer,"<<endl<<" 3: Perso3 -> D"<<char(39)<<"un instinct explorateur, ce personnage peut d"<<char(130)<<"nicher le moindre indice,"<<endl<<" 4: Perso4 -> En qu"<<char(136)<<"te d"<<char(39)<<"une "<<char(130)<<"ternelle reconnaissance, il saura diriger le groupe."<<endl;
       cin>>choix;
       cin.clear();
       cin.ignore(10000, '\n');
   }
   while(choix<1 || choix>4);
   cout<< "Vous avez choisi le "<<Personnages[choix-1]<<endl;

   switch (choix) {
   case 1: { //Programme principal joueur 1--------------------------------------------------
       int r = 2;
       Joueur Joueur1;
       Joueur1.Set_Name();
       Joueur1.Set_Nb_Player(1);
       cout << endl << "Bienvenue, " << Joueur1.Get_Name() << endl;
       system("pause");

       while(1){
              switch (Room) {
              case 1:
                  system("cls");
                  Affichage(Room);
                  Joueur1.Set_Item(Joueur1.Set_ItemFromPlayer());
                  Joueur1.Send_ItemToPlayer();
                  carte(Room);
                  cin >> Room;
                  break;
              case 2:
                  system("cls");
                  Affichage(Room);
                  Joueur1.Get_Item();
                  cin >> Room;
                  break;
              case 3:
                  system("cls");
                  Affichage(Room);
                  cin >> Room;
                  break;
             }
       }
   }
       break;//---------------------------------------------------------------------------

   case 2://Programme principal joueur 2--------------------------------------------------
       cout << "blabla2" <<endl;
       switch (action) {

       }
       break;//---------------------------------------------------------------------------

   case 3://Programme principal joueur 3--------------------------------------------------
       cout << "blabla3" <<endl;
       switch (action) {

       }
       break;//---------------------------------------------------------------------------

   case 4://Programme principal joueur 4--------------------------------------------------
       cout << "blabla4" <<endl;
       switch (action) {

       }
       break;//---------------------------------------------------------------------------

   }
   return 0;

}

void AllTeTime(int &Room){

}
