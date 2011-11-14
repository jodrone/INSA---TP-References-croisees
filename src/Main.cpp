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
	// TODO : REFACTORING
	//Index de l'argument traite
	int indexArg = 1;
	int i;
	
	string myKeywordFile;
	string monArgTemporaire;
	Flot monFlot;
	RefCroisees mesRefCroisees;
	string maListeID;
	bool optionExclure = false;

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
			 	{ //On a notre fichier a traiter
					myKeywordFile = argv[1];
					maListeID = monFlot.ChercherId(myKeywordFile,
													mesRefCroisees);
				}
		break;


		case 3 :
			// Cas d'erreur :
			// -k + le fichier de mots cles (pas de fichier a traiter)
			monArgTemporaire = argv[1];
			if ( monArgTemporaire == "-k" )
				{
					Usage ( "Pas de fichier a traiter" );
					return ARG_ERROR;
				}

			if (monArgTemporaire == "-e" )
				{
					optionExclure = true;
					//On recupere les identifiants dans le fichier concerné
					myKeywordFile = argv[2];
					maListeID = monFlot.ChercherId(myKeywordFile,
													mesRefCroisees);
				}
			else
				{
					//On récupère les identifiants dans les deux fichiers
					for ( i = 1; i < argc; i++)
					myKeywordFile = argv[i];
					maListeID = monFlot.ChercherId(myKeywordFile,
													mesRefCroisees);
				}

		break;

		default :
			indexArg = 1;
			monArgTemporaire = argv[indexArg];
			if ( monArgTemporaire == "-k" )
				{
					// On récupère les mots clés
					myKeywordFile = argv[indexArg + 1];
					maListeID = monFlot.ChercherId(myKeywordFile,
													mesRefCroisees);
					indexArg = indexArg + 2 ; // On peut sauter un argument, vu qu'on vient de le récupérer
				}

			// En cas de modification de IndexArg suite à "-k"
			monArgTemporaire = argv[indexArg];
			if ( monArgTemporaire == "-e" )
				{
					optionExclure = true;
					indexArg = indexArg + 1 ;
				}
			//Et on récupère les identifiants de tout le reste
			for ( indexArg; indexArg < argc; indexArg++ )
				{
					myKeywordFile = argv[indexArg];
					maListeID = monFlot.ChercherId(myKeywordFile,
												mesRefCroisees);
				}
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
