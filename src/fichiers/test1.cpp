#include<iostream> 

using namespace std;
/* Fichier n�1 de test du programme 
R�f�rences Crois�es */

int main()
{
   double a(0), b(0); //D�claration des variables utiles

   cout << "Bienvenue dans le programme d'addition a+b !" << endl;

   cout << "Donnez une valeur pour a : ";    //Demande du premier nombre 
   cin >> a;

   cout << "Donnez une valeur pour b : ";    //Demande du deuxi�me nombre
   cin >> b; cin >> b;

   double const resultat(a + b);   //On effectue l'op�ration

   cout << a << " + " << b << " = " << resultat << endl; //On affiche le r�sultat

   return 0;
}
/* Fin du programme