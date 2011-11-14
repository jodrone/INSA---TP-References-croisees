/*************************************************************************
                           Fichier  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Réalisation de la classe <Fichier> (fichier Fichier.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;

//------------------------------------------------------ Include personnel
#include "Fichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
	bool Fichier::AddLigne( int numLigne )
	// Algorithme :
	{
		if (nbNumLignes == 0)
		{
			vector<int> *numLignes = new vector<int>;
			numLignes->push_back(numLigne);
			nbNumLignes++;
			return 1;
		}
		else if (numLignes->at(nbNumLignes-1) != numLigne)
		{
			numLignes->push_back(numLigne);
			nbNumLignes++;
			return 1;
		}
		else 
		{
			return 0;
		}
	}

//-------------------------------------------- Constructeurs - destructeur
	Fichier::Fichier ( string unNom )
	// Algorithme : Trivial
	{
		nomFic = unNom;
		nbNumLignes = 0;
		numLignes = NULL;
	}

	Fichier::Fichier ( const Fichier & unFichier )
	// Algorithme : Création d'un nouveau vector et recopie des élements
	{
		nomFic = unFichier.nomFic;
		nbNumLignes = unFichier.nbNumLignes;
		vector<int> *numLignes = new vector<int>;
		*numLignes = *unFichier.numLignes;
	}

	Fichier::~Fichier ( )
	// Algorithme : Trivial
	{
		delete numLignes; 
	}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées