/*************************************************************************
                           Occurrences  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---- Interface de la classe <Occurrences> (fichier Occurrences.h) ------
#if ! defined ( OCCURRENCES_H )
#define OCCURRENCES_H

//--------------------------------------------------- Interfaces utilisees
#include "Fichier.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Role de la classe <Occurrences>
// 
// La classe Occurrences a pour role de contenir toutes les occurrences d'un
// identificateur.
//
//------------------------------------------------------------------------ 

class Occurrences 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
	void DisplayOccurrences () const;
	// Mode d'emploi : affiche sur la sortie standard la liste des
	// occurrences
	//

	bool AjouterOccurrence ( string nomFic, int numLigne );
	// Mode d'emploi : ajoute une occurence. Retourne faux si occurrence 
	// deja existante et vrai sinon.
	//
	// Contrat : numLigne > 0
	//

  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//

//-------------------------------------------- Constructeurs - destructeur

	Occurrences ( const Occurrences & uneOccurrences );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// uneOccurrences
	//
	// Contrat :
	//

	Occurrences ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~Occurrences ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Methodes protegees

//----------------------------------------------------- Attributs proteges
	vector <Fichier> vecOcc;
};

//----------------------- Autres definitions dependantes de <Occurrences>

#endif // OCCURRENCES_H
