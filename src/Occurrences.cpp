/*************************************************************************
                           Occurrences  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- R�alisation de la classe <Occurrences> (fichier Occurrences.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <algorithm>

//------------------------------------------------------ Include personnel
#include "Occurrences.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques

bool Occurrences::AjouterOccurrence ( string nomFic, int numLigne )
// Algotithme : Appel de AddLigne
{
	vector<Fichier>::iterator it;
	Fichier fichierRecherche(nomFic);

	it = find (vecOcc.begin(), vecOcc.end(), fichierRecherche);

	// Si rien trouv�
	if ( it == vecOcc.end() )
	{
		Fichier fichier( nomFic );
		fichier.AddLigne (numLigne);
		vecOcc.push_back ( fichier );
		return true;
	}
	// si trouv�
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
// Algorithme : Appel de destructeur de Fichier sur chaque �l�ment
{
#if defined ( MAP ) 
	cout << "Appel du destructeur de Occurrences" << endl;
#endif
	vecOcc.erase (vecOcc.begin(),vecOcc.end());
} // ----- Fin de ~Occurrences

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es
