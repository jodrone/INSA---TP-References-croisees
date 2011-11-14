/*************************************************************************
                           Identificateur  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Identificateur> (fichier Identificateur.h) --
#if ! defined ( IDENTIFICATEUR_H )
#define IDENTIFICATEUR_H

//--------------------------------------------------- Interfaces utilisées
#include "Occurrences.h"
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Identificateur>
// 
// La classe Identificateur a pour rôle de représenter un identificateur et 
// ces occurrences associées.
//
//------------------------------------------------------------------------ 

class Identificateur 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	void AjouterOccurrence( string nomFic , int numLigne);
	// Mode d'emploi : Ajoute une occurence à l'identificateur
	//
	// Contrat : numLigne > 0
	//

  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//

//-------------------------------------------- Constructeurs - destructeur

	Identificateur ( const Identificateur & unIdentificateur );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// unIdentificateur
	//
	// Contrat :
	//

	Identificateur ( string monNom );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~Identificateur ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Méthodes protégées	

//----------------------------------------------------- Attributs protégés

	string nomId;
	Occurrences *occId;
};

//----------------------- Autres définitions dépendantes de <Identificateur>

#endif // IDENTIFICATEUR_H
