/*************************************************************************
                           RefCroisees  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- R�alisation de la classe <RefCroisees> (fichier RefCroisees.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;

//------------------------------------------------------ Include personnel
#include "RefCroisees.h"
#include "Identificateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
void RefCroisees::AddReference(string id, int numLigne)
// Algorithme :
{
}

//-------------------------------------------- Constructeurs - destructeur
RefCroisees::RefCroisees ( )
// Algorithme : Trivial
{
	 
}

RefCroisees::~RefCroisees ( )
// Algorithme : Trivial
{
	#if defined ( MAP ) 
		cout << "Appel du destructeur de RefCroisees" << endl;
	#endif
	
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es
