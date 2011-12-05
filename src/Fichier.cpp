/*************************************************************************
                           Fichier  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Realisation de la classe <Fichier> (fichier Fichier.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
#include <algorithm>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Fichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
void Fichier::DisplayFichier() const
// Algorithme : Parcourt de numLignes et affichage des numeros de ligne
{
	cout << "\t" << nomFic;
	for (int i=0; i<numLignes->size(); i++)
	{
		cout << " " << numLignes->at(i);
	}
}

bool Fichier::AddLigne( int numLigne )
// Algorithme : Ajoute une ligne si elle n'existe pas deja.
{
	if (numLignes == NULL)
	{
		numLignes = new vector<int>;
		numLignes->push_back(numLigne);

		return 1;
	}
	else if (! binary_search (numLignes->begin(), numLignes->end(), numLigne))
			
	{
		numLignes->push_back(numLigne);		
		return 1;
	}
	else 
	{
		return 0;
	}
} // ----- Fin de AddLigne

bool Fichier::operator==(Fichier const & unFichier) const
// Algorithme : Trivial
{
	if (nomFic == unFichier.nomFic) return true;
	else return false;
} // ----- Fin de operator==

//-------------------------------------------- Constructeurs - destructeur
Fichier::Fichier ( string unNom )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de Fichier" << endl;
#endif
	nomFic =		unNom;
	numLignes =		NULL;
} // ----- Fin de Fichier

Fichier::Fichier ( const Fichier & unFichier )
// Algorithme : Creation d'un nouveau vector et recopie des elements
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de copie de Fichier" << endl;
#endif
	nomFic =		unFichier.nomFic;
	numLignes =		new vector<int>;
	*numLignes =	*unFichier.numLignes;
} // ----- Fin de Fichier (Constructeur de copie)

Fichier::~Fichier ( )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du destructeur de Fichier" << endl;
#endif
	delete numLignes;
} // ----- Fin de ~Fichier

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees
