/*************************************************************************
                           Fichier  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- R�alisation de la classe <Fichier> (fichier Fichier.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;

//------------------------------------------------------ Include personnel
#include "Fichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
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
} // ----- Fin de AddLigne

//-------------------------------------------- Constructeurs - destructeur
Fichier::Fichier ( string unNom )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de Fichier" << endl;
#endif
	nomFic = unNom;
	nbNumLignes = 0;
	numLignes = NULL;
} // ----- Fin de Fichier

Fichier::Fichier ( const Fichier & unFichier )
// Algorithme : Cr�ation d'un nouveau vector et recopie des �lements
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de copie de Fichier" << endl;
#endif
	nomFic =					unFichier.nomFic;
	nbNumLignes =				unFichier.nbNumLignes;
	vector<int> *numLignes =	new vector<int>;
	*numLignes =				*unFichier.numLignes;
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

//----------------------------------------------------- M�thodes prot�g�es