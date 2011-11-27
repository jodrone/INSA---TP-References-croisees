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
#include <map>
#include <string>
#include "Occurrences.h"

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

	// Types personalises
	typedef map <string, Occurrences *> TypeDicoId;
	typedef pair<string,Occurrences *>	TypePairId;

	void DisplayReference() const;
	// Mode d'emploi : Affiche sur la sortie standard l'integralite de 
	// dicoId et des occurrences respectives des Identificateurs.
	
	bool FindReference(const string id);
	// Mode d'emploi : cherche l'identificaeur id dans le dictionnaire.
	// Renvoie false s'il n'existe pas, true sinon.

	void AddReference(string id);
	// Mode d'emploi : Ajoute un identificateur au dictionnaire. S'il est 
	// inconnu, il est créé.
	//

	void AddReference(string id, int numLigne, string nomFic );
	// Mode d'emploi : ajoute une référence au dictionnaire.
	// Si l'Identificateur est inconnu, il est créé.
	// L'occurence est ensuite ajoutée.
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
	// Mode d'emploi : Constructeur par defaut
	//
	// Contrat :
	//

    virtual ~RefCroisees ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//
//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges

	TypeDicoId dicoId;
	// Dictionnaire contenant des pointeurs sur les occurrences 
	// correspondant à une cle de type string representant les 
	// identificateurs  
};

//----------------------- Autres definitions dependantes de <RefCroisees>

#endif // REFCROISEES_H
