/*************************************************************************
                           Fichier  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Fichier> (fichier Fichier.h) --
#if ! defined ( FICHIER_H )
#define FICHIER_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Fichier>
// 
// La classe Fichier a pour rôle de représenter les occurences d'un fichier 
// pour un identificateur donné.
//
//------------------------------------------------------------------------ 

class Fichier 
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
	
	Fichier ( const Fichier & unFichier );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// unFichier
	//
	// Contrat :
	//

	Fichier ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~Fichier ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//
//----------------------------------------------------- Attributs protégés

	string nomFic;
	int nbNumLignes;
	vector <int> *numLignes;
};

//----------------------- Autres définitions dépendantes de <Fichier>

#endif // FICHIER_H