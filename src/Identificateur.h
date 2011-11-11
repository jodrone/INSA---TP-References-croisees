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
	
  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//

//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Méthodes protégées	

	Identificateur ( const Identificateur & unIdentificateur );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// unIdentificateur
	//
	// Contrat :
	//

	Identificateur ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~Identificateur ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//

//----------------------------------------------------- Attributs protégés

	string nomId;
	Occurrences *occId;
};

//----------------------- Autres définitions dépendantes de <Identificateur>

#endif // IDENTIFICATEUR_H