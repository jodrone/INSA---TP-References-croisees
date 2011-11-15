/*************************************************************************
                           RefCroisees  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---- Interface de la classe <RefCroisees> (fichier RefCroisees.h) ------
#if ! defined ( REFCROISEES_H )
#define REFCROISEES_H

//--------------------------------------------------- Interfaces utilisees
#include <set>
#include "Identificateur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Role de la classe <RefCroisees>
// 
// La classe RefCroisees a pour role de gérer l'ensembles des références
// croisees.
//
//------------------------------------------------------------------------ 

class RefCroisees  
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
	
	void AddReference(string id, int numLigne);
	// Mode d'emploi : Ajoute une reference a l'arbre. Si l'identificateur est
	// inconnu, il est cree. L'occurence est ajoutee.
	//
	// Contrat : numLigne > 0
	//

	void AddReference(string id, int numLigne, string nomFic );
	// Mode d'emploi : ajoute une référence à l'arbre.
	// Si l'ID est inconnu, il est créé.
	// L'occurence est ensuite ajoutée

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
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges

	set<Identificateur> arbreId;
};

//----------------------- Autres definitions dependantes de <RefCroisees>

#endif // REFCROISEES_H

// Fonction();
// Mode d'emploi :
//
// Contrat :
//
