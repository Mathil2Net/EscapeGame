#include <iostream>
#include <string.h>
#include "Joueur.h"
#include "Affichage.h"

using namespace std;

void Affichage::Room_display(int &position)
{
    switch (position) {
    case '1':
        cout << "Bienvenue dans la salle n°1" << endl;
			break;
    case '2':
        cout << "Bienvenue dans la salle n°2" << endl;
			break;
    case '3':
			cout << "Bienvenue dans la salle n°3" << endl;
			break;
		default :
			cout << "error" << endl;
			break;
   }
}
