/*************************************************************************
                           Identificateur  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Realisation de la classe <Identificateur> (fichier Identificateur.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;

//------------------------------------------------------ Include personnel
#include "Identificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

bool Identificateur::AjouterOccurrence( string nomFic , int numLigne)
// Algorithme :
{
	if (occId == NULL)
	{
		Occurrences *occId = new Occurrences;
	}
	return occId->AjouterOccurrence(nomFic,numLigne);
} // ----- Fin de AjouterOccurrence

//-------------------------------------------- Constructeurs - destructeur

Identificateur::Identificateur (string monNom )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de Identificateur" << endl;
#endif
	nomId = monNom;
	occId = NULL;
} // ----- Fin de Identificateur

Identificateur::Identificateur ( const Identificateur & unIdentificateur )
// Algorithme : Trivial
{
#if defined ( MAP ) 
	cout << "Appel du constructeur de copie de Identificateur" << endl;
#endif
	nomId = unIdentificateur.nomId;
	Occurrences *occId = new Occurrences( *unIdentificateur.occId );
} // ----- Fin de Identificateur (constructeur de copie)

Identificateur::~Identificateur ( )
// Algorithme : 
{
#if defined ( MAP ) 
	cout << "Appel du destructeur de Identificateur" << endl;
#endif
} // ----- Fin de ~Identificateur

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees
