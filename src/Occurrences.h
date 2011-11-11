/*************************************************************************
                           Occurrences  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//---- Interface de la classe <Occurrences> (fichier Occurrences.h) ------
#if ! defined ( OCCURRENCES_H )
#define OCCURRENCES_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Occurrences>
// 
// La classe Occurrences a pour rôle de contenir toutes les occurrences d'un 
// identificateur.
//
//------------------------------------------------------------------------ 

class Occurrences 
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

//----------------------------------------------------- Attributs protégés
	vector <Fichier> vecOcc;
};

//----------------------- Autres définitions dépendantes de <Occurrences>

#endif // OCCURRENCES_H