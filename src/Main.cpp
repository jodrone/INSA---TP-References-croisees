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
	switch ( argc )
	{	
		case 1 :
			Usage( "liste d'arguments vide" );
			return 1;
			break;
		case 2 : //Sans option ou alors pas de fichiers

			break;

		default :// Options & fichiers
			return 0;
			break;
	}

	string	adresseFichiers("src/fichiers/");
	string	listeId;
	int		a;

	Flot		monFlot;
	RefCroisees mesRefCroisees;

	listeId = monFlot.ChercherId(adresseFichiers+="source.txt", mesRefCroisees);

	cin >> a;


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
