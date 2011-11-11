/*************************************************************************
                           Identificateur  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Identificateur> (fichier Identificateur.h) --
#if ! defined ( IDENTIFICATEUR_H )
#define IDENTIFICATEUR_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Identificateur>
// 
// La classe Identificateur a pour r�le de repr�senter un identificateur et 
// ces occurrences associ�es.
//
//------------------------------------------------------------------------ 

class Identificateur 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	
  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//

//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- M�thodes prot�g�es	

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

//----------------------------------------------------- Attributs prot�g�s

	string nomId;
	Occurrences *occId;
};

//----------------------- Autres d�finitions d�pendantes de <Identificateur>

#endif // IDENTIFICATEUR_H