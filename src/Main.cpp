/*************************************************************************
                           Main  - Programme Principal
                             -------------------
    debut                : Nov. 2011
copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent
*************************************************************************/

//---------- Realisation de la tache <Main> (fichier Main.cpp) ---

/////////////////////////////////////////////////////////////////  INCLUDE
//-------------------------------------------------------- Include systeme
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
	bool optionKeyWord = false;


	//In case of^^
    const int NB_MOTCLES = 63;
    string mots[NB_MOTCLES] = {"asm", "auto", "bool", "break", "case", "catch", "char",
                               "class", "const", "const_cast", "continue", "default",
                               "delete", "do", "double", "dynamic_cast", "else", "enum",
                               "explicit", "export", "extern", "false", "float", "for",
                               "friend", "goto", "if", "inline", "int", "long", "mutable",
                               "namespace", "new", "operator", "private", "protected",
                               "public", "register", "reinterpret_cast", "return",
                               "short", "signed", "sizeof", "static", "static_cast",
                               "struct", "switch", "template", "this", "throw", "true",
                               "try", "typedef", "typeid", "typename", "union", "unsigned",
                               "using", "virtual", "void", "volatile", "wchar_t", "while"};



	switch ( argc )
	{
		case 1 :
			Usage ( "Liste d'arguments vide" ) ;
			return ARG_ERROR;
		break;


		case 2 : // Soit -k et pas de fichier soit pas d'options
			// Dans tout les cas, on utilise les mots clés du CPP
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
			// Dans tout les cas, on utilise les mots clés du CPP
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
					optionKeyWord = true;
					myKeywordFile = argv[indexArg + 1];
					maListeID = monFlot.ChercherId(myKeywordFile,
													mesRefCroisees);
					// On peut sauter un argument, on l'a traité
					indexArg = indexArg + 2 ;
				}

			// En cas de modification de IndexArg suite à "-k"
			monArgTemporaire = argv[indexArg];
			if ( monArgTemporaire == "-e" )
				{
					optionExclure = true;
					indexArg = indexArg + 1 ;
				}
			//Et on récupère les identifiants de tout le reste
			for ( i = indexArg; i < argc; i++ )
				{
					myKeywordFile = argv[i];
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
