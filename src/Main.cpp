/*************************************************************************
                           Main  - Programme Principal
                             -------------------
    d�but                : ...
copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent
*************************************************************************/

//---------- R�alisation de la t�che <Main> (fichier Main.cpp) ---

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include syst�me
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
#define ARG_ERROR 42
//------------------------------------------------------------------ Types

//////////////////////////////////////////////////////////////////  PUBLIC
//---------------------------------------------------- Fonctions publiques
int main ( int argc,const char* argv[] )
// Algorithme : Traitement trivial des arguments
// En cas d'erreur, on renvoie un message d'erreur + Usage()
{
	//Index de l'argument trait�
	int indexArg = 1;
	int i;
	
	string myKeywordFile;
	string monArgTemporaire;
	Flot monFlot;
	RefCroisees mesRefCroisees;
	string maListeID;
	bool optionExclure;

	switch ( argc )
	{
		case 1 :
			Usage ( "Liste d'arguments vide" ) ;
			return ARG_ERROR;
			break;


		case 2 : // Soit -k et pas de fichier soit pas d'options
			monArgTemporaire = argv [ 1 ];
			if ( monArgTemporaire == "-k" || monArgTemporaire == "-e" )
				{
					Usage ( "Pas de fichier a traiter..." );
					return ARG_ERROR;
				}
			else
			 	{ //On a notre fichier � traiter
					myKeywordFile = argv[1];
					maListeID = monFlot.ChercherId(myKeywordFile, mesRefCroisees);
				}
			break;


		case 3 :
			// Cas d'erreur :
			// -k + le fichier de mots cl�s (pas de fichier � traiter)
			monArgTemporaire = argv[1];
			if ( monArgTemporaire == "-k" )
				{
					Usage ( "Pas de fichier a traiter" );
					return ARG_ERROR;
				}

			for ( i=1; i < argc; i++ )
				{
					cout << argv[i] << endl;
				}
			break;

		default :
			cout << "Tiens, voila du caca" << endl;
			break;

	}


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
