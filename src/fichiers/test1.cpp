#include<iostream> 

using namespace std;
/* Fichier n°1 de test du programme 
Références Croisées */

int main()
{
   double a(0), b(0); //Déclaration des variables utiles

   cout << "Bienvenue dans le programme d'addition a+b !" << endl;

   cout << "Donnez une valeur pour a : ";    //Demande du premier nombre 
   cin >> a;

   cout << "Donnez une valeur pour b : ";    //Demande du deuxième nombre
   cin >> b; cin >> b;

   double const resultat(a + b);   //On effectue l'opération

   cout << a << " + " << b << " = " << resultat << endl; //On affiche le résultat

   return 0;
}
/* Fin du programme