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
	string monArgTemporaire;
	Flot monFlot;
	RefCroisees mesRefCroisees;
	string maListeID;

	switch ( argc )
	{
		case 1 :
			Usage ( "Liste d'arguments vide" ) ;
			return 42;
			break;


		case 2 : // Soit -k et pas de fichier soit pas d'options
			monArgTemporaire = argv [ 1 ];
			if ( monArgTemporaire == "-k" || monArgTemporaire == "-e" )
				{
					Usage ( "Indiquez un fichier à traiter" );
				}
			else
			 	{ //On a notre fichier à traiter
					myKeywordFile = argv[1];
					maListeID = monFlot.ChercherId(myKeywordFile, mesRefCroisees);
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
