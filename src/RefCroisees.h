/*************************************************************************
                           RefCroisees  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---- Interface de la classe <RefCroisees> (fichier RefCroisees.h) ------
#if ! defined ( REFCROISEES_H )
#define REFCROISEES_H

//--------------------------------------------------- Interfaces utilisées
#include <set>
#include "Identificateur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <RefCroisees>
// 
// La classe RefCroisees a pour rôle de gérer l'ensembles des références
// croisees.
//
//------------------------------------------------------------------------ 

class RefCroisees  
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	
	void AddReference(string id, int numLigne);
	// Mode d'emploi : Ajoute une référence à l'arbre. Si l'identificateur est
	// inconnu, il est créé. L'occurence est ajoutée.
	//
	// Contrat : numLigne > 0
	//

  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//

//-------------------------------------------- Constructeurs - destructeur
	RefCroisees ( const RefCroisees & uneRefCroisees );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// uneRefCroisees
	//
	// Contrat :
	//

	RefCroisees ();
	// Mode d'emploi :
	//
	// Contrat :
	//

    ~RefCroisees ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//
//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Méthodes protégées	

//----------------------------------------------------- Attributs protégés

	set<Identificateur> arbreId;
};

//----------------------- Autres définitions dépendantes de <RefCroisees>

#endif // REFCROISEES_H