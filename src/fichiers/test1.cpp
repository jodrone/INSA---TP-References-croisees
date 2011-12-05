#include<iostream> 

using namespace std;
/* Fichier numero 1 de test du programme 
References Croisees */

int main()
{
   double a(0), b(0); //Declaration des variables utiles

   cout << "Bienvenue dans le programme d'addition a+b !" << endl;

   cout << "Donnez une valeur pour a : ";    //Demande du premier nombre 
   cin >> a;

   cout << "Donnez une valeur pour b : ";    //Demande du deuxieme nombre
   cin >> b; cin >> b;

   double const resultat(a + b);   //On effectue l'operation

   cout << a << " + " << b << " = " << resultat << endl; //On affiche le resultat

   return 0;
}
/* Fin du programme
