/*************************************************************************
                           Occurrences  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Realisation de la classe <Occurrences> (fichier Occurrences.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <algorithm>
#include <iostream>
//------------------------------------------------------ Include personnel
#include "Occurrences.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

void Occurrences::DisplayOccurrences () const
// Algorithme: Trivial 
{
	vector<Fichier>::const_iterator it;

	for ( it = vecOcc.begin(); it != vecOcc.end(); ++it)
	{
		it->DisplayFichier();
	}
}

bool Occurrences::AjouterOccurrence ( string nomFic, int numLigne )
// Algorithme :
// On recherche si il existe déjà une occurrence dans un fichier,
// Puis on appelle AddLigne sur un nouveau fichier, ou sur le fichier existant
{
	vector<Fichier>::iterator it;
	Fichier fichierRecherche(nomFic);
	
	it = find (vecOcc.begin(), vecOcc.end(), fichierRecherche);	

	// Si rien trouve
	if ( it == vecOcc.end() )
	{
		Fichier fichier( nomFic );
		fichier.AddLigne (numLigne);
		vecOcc.push_back ( fichier );
		return true;
	}
	// si trouve
	else
	{		
		return it->AddLigne( numLigne );
	}

} // ----- Fin de AddOccurrence

//-------------------------------------------- Constructeurs - destructeur

Occurrences::Occurrences ( )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de Occurrences" << endl;
#endif
	
} // ----- Fin de Occurrences

Occurrences::Occurrences ( const Occurrences & uneOccurrences )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de copie de Occurrences" << endl;
#endif
	vecOcc = uneOccurrences.vecOcc;
} // ----- Fin de Occurrences (constructeur de copie)

Occurrences::~Occurrences ( )
// Algorithme : Appel de destructeur de Fichier sur chaque element
{
#if defined ( MAP ) 
	cout << "Appel du destructeur de Occurrences" << endl;
#endif
	vecOcc.erase (vecOcc.begin(),vecOcc.end());
} // ----- Fin de ~Occurrences

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees
