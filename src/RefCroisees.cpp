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

//------------------------------------------------------ Include personnel
#include "RefCroisees.h"
#include "Identificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
void RefCroisees::AddReference(string id, int numLigne)
// Algorithme :
{
}

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
