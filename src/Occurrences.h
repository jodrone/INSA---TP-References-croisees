/*************************************************************************
                           Occurrences  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---- Interface de la classe <Occurrences> (fichier Occurrences.h) ------
#if ! defined ( OCCURRENCES_H )
#define OCCURRENCES_H

//--------------------------------------------------- Interfaces utilis�es
#include "Fichier.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Occurrences>
// 
// La classe Occurrences a pour r�le de contenir toutes les occurrences d'un 
// identificateur.
//
//------------------------------------------------------------------------ 

class Occurrences 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques
	bool AjouterOccurrence ( string nomFic, int numLigne );
	// Mode d'emploi : ajoute une occurence. Retourne faux si occurrence d�j�
	// existante et vrai sinon.
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

    ~Occurrences ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- M�thodes prot�g�es	

//----------------------------------------------------- Attributs prot�g�s
	vector <Fichier> vecOcc;
};

//----------------------- Autres d�finitions d�pendantes de <Occurrences>

#endif // OCCURRENCES_H
