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

//------------------------------------------------------ Include personnel
#include "Occurrences.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques

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