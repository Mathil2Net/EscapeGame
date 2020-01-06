#ifndef JOUEUR_1_H
#define JOUEUR_1_H
#include <vector>
#include <string>


 class Joueur
 {
 private:
     double Item = 0;
     int Nb_Player = 0;
     std::vector<int> v = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
     double PV = 100;
     double Position = 0;
     std::string Name;
     int Nb_SentP1=1;
     int Nb_SentP2=1;
     int Nb_SentP3=1;
     int Nb_SentP4=1;
     int Cheat=1;

 public:
   void Set_Nb_Player(int nb_player);
   void Set_Name();
   std::string Get_Name();
   void Get_Item();
   void Set_Item(int item);
   int Set_ItemFromPlayer();
   void Send_ItemToPlayer();
   void Set_Position(double &position);
   double Get_Position();
  // void AllTheTime();
 };
#endif // JOUEUR_1_H
