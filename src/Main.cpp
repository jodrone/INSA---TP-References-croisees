/*************************************************************************
                           Main  - Programme Principal
                             -------------------
    début                : ...
copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent
*************************************************************************/

//---------- Réalisation de la tâche <Main> (fichier Main.cpp) ---

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include système
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
//------------------------------------------------------ Include personnel
#include "Main.h"
#include "RefCroisees.h"
#include "Flot.h"

///////////////////////////////////////////////////////////////////  PRIVE
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ( int argc,const char* argv[] )
// Algorithme : Traitement trivial des arguments
// En cas d'erreur, on renvoie un message d'erreur + Usage()
{
	//Index de l'argument traité
	int indexArg = 1;
	int i;
	
	string myKeywordFile;
	Flot monFlot;
	RefCroisees mesRefCroisees;
	string maListeID;



	//Traitement du cas où la liste d'arguments est vide
	if ( argc == 1 )
	{
		Usage ( "Liste d'arguments vide" ) ;
		return 42;
	}
	
	
	if ( !strcmp(argv[1],"-k") && strcmp(argv[2],"-e") && argc > 3 )
	{
		myKeywordFile = argv[2]; //OK, on a un fichier de mot cles
		maListeID = monFlot.ChercherId(myKeywordFile, mesRefCroisees);
	}
	else
		{ if ( argc==2 || strcmp(argv[2],"-e") )
		  {
		      Usage( " Indiquez un fichier de mots cles ");
			  return 42;
		  }
		}

	/*string	adresseFichiers("src/fichiers/");

	listeId = monFlot.ChercherId(adresseFichiers+="source.txt", mesRefCroisees);
	*/
	return 0;


} //----- fin de Main 


void Usage ( string aPhrase )
//Algorithme : Trivial
{
	cout << "Erreur : " << aPhrase << endl;
	cout << "Usage : refCroisees [ -k fichier_keyword ] -e fichier1  ... fichier_n " << endl;
	cout << "Usage : refCroisees [ -k fichier_keyword ] fichier1 ... fichier_n" << endl;
	cout << "Options : " << endl;
	cout << " -k : permet d'indiquer le fichier de mots cles a utiliser" << endl;
	cout << "Si -k est absent, les mots cles du C++ sont utilises par defaut " << endl;
	cout << " -e : permet d'exclure les mots cles " << endl;
	cout << " License DWTFYWPL. Copyleft 2011 par T.Pourcelot & J.Vincent" << endl;
} //----- fin de Usage

//----- Fin de Main.cpp
