/*************************************************************************
                           Identificateur  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Réalisation de la classe <Identificateur> (fichier Identificateur.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;

//------------------------------------------------------ Include personnel
#include "Identificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void Identificateur::AjouterOccurrence( string nomFic , int numLigne)
// Algorithme :
{
	occId->AjouterOccurrence(nomFic,numLigne);
}

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
	Occurrences *occId = new Occurrences;
	*occId = 

} // ----- Fin de Identificateur (constructeur de copie)

Identificateur::~Identificateur ( )
// Algorithme : 
{
#if defined ( MAP ) 
	cout << "Appel du destructeur de Identificateur" << endl;
#endif
} // ----- Fin de ~Identificateur

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées