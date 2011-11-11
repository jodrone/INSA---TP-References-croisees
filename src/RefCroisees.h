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
	
  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//

//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Méthodes protégées	

	RefCroisees ( const RefCroisees & uneRefCroisees );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// uneRefCroisees
	//
	// Contrat :
	//

	RefCroisees ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~RefCroisees ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//
//----------------------------------------------------- Attributs protégés

	set<Identificateur> arbreId;
};

//----------------------- Autres définitions dépendantes de <RefCroisees>

#endif // REFCROISEES_H