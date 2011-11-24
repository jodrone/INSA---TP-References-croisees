/*************************************************************************
                           RefCroisees  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Realisation de la classe <RefCroisees> (fichier RefCroisees.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <algorithm>
#include <iostream>


//------------------------------------------------------ Include personnel
#include "RefCroisees.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
void RefCroisees::DisplayReference() const
// Algorithme : Parcours integral du dictionnaire
{
	TypeDicoId::const_iterator it;

	cout << endl << "Liste des Identificateurs" << endl;

	for ( it = dicoId.begin(); it != dicoId.end(); ++it)
	{
		cout <<  it->first << "\t" ;
		it->second->DisplayOccurrences();
		cout << endl;
	}
}

bool RefCroisees::FindReference(const string id)
// Algorithme : On parcourt l'arbre pour trouver si l'identifiant existe.
{
	TypeDicoId::iterator it;

	it = dicoId.find (id);

	if ( it == dicoId.end() )
	{
		return false;
	}
	else
	{		
		return true;
	}

	return true;
} // ----- Fin de FindReference

void RefCroisees::AddReference(string id)
// Algorithme : Trivial
{
	Occurrences*	occ = NULL;
	TypePairId		myPair(id,occ);

	dicoId.insert(myPair);
} // ----- Fin de AddReference

void RefCroisees::AddReference(string id, int numLigne, string nomFic)
// Algo : insertion de l'identificateur puis de l'occurence.
{
	
	TypeDicoId::iterator			it;
	pair<TypeDicoId::iterator,bool>	pairInsert;

	Occurrences*	occ = NULL;
	TypePairId		myPair(id,occ);

	pairInsert = dicoId.insert(myPair);
	
	// Nouvel identificateur
	if (pairInsert.second == true )
	{
		pairInsert.first->second = new Occurrences;		
	}
	pairInsert.first->second->AjouterOccurrence(nomFic, numLigne);

} // ----- Fin de AddReference

//-------------------------------------------- Constructeurs - destructeur
RefCroisees::RefCroisees ( )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de RefCroisees" << endl;
#endif	
} // ----- Fin de RefCroisees

RefCroisees::RefCroisees ( const RefCroisees & uneRefCroisees )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de copie de RefCroisees" << endl;
#endif	
} // ----- Fin de RefCroisees (constructeur de copie )

RefCroisees::~RefCroisees ( )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du destructeur de RefCroisees" << endl;
#endif	
} // ----- Fin de ~RefCroisees


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees
