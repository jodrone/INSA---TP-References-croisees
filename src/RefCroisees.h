/*************************************************************************
                           RefCroisees  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---- Interface de la classe <RefCroisees> (fichier RefCroisees.h) ------
#if ! defined ( REFCROISEES_H )
#define REFCROISEES_H

//--------------------------------------------------- Interfaces utilis�es
#include <set>
#include "Identificateur.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <RefCroisees>
// 
// La classe RefCroisees a pour r�le de g�rer l'ensembles des r�f�rences
// croisees.
//
//------------------------------------------------------------------------ 

class RefCroisees  
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	
	void AddReference(string id, int numLigne);
	// Mode d'emploi : Ajoute une r�f�rence � l'arbre. Si l'identificateur est
	// inconnu, il est cr��. L'occurence est ajout�e.
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
//----------------------------------------------------- M�thodes prot�g�es	

//----------------------------------------------------- Attributs prot�g�s

	set<Identificateur> arbreId;
};

//----------------------- Autres d�finitions d�pendantes de <RefCroisees>

#endif // REFCROISEES_H