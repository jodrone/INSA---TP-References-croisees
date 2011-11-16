/*************************************************************************
                           Identificateur  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Identificateur> (fichier Identificateur.h) --
#if ! defined ( IDENTIFICATEUR_H )
#define IDENTIFICATEUR_H

//--------------------------------------------------- Interfaces utilisees
#include "Occurrences.h"
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Role de la classe <Identificateur>
// 
// La classe Identificateur a pour role de representer un identificateur et
// ses occurrences associees.
//
//------------------------------------------------------------------------ 

class Identificateur 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
	bool AjouterOccurrence( string nomFic , int numLigne);
	// Mode d'emploi : Ajoute une occurence a l'identificateur.
	// Retourne faux si occurrence deja existante, vrai sinon.
	//
	// Contrat : numLigne > 0
	//

	bool operator==(Identificateur const & unIdent) const;
	// Mode d'emploi : renvoie vrai si unIdent est égal à this
	//
	// Contrat : le test ne ce fait que sur l'attribut nomId !
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
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs prot�g�s

	string nomId;
	Occurrences *occId;
};

//----------------------- Autres definitions dependantes de <Identificateur>

#endif // IDENTIFICATEUR_H
