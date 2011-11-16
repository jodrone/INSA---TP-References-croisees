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
	bool operator==(Fichier const & unFichier) const;
	// Mode d'emploi : renvoie vrai unFichier est égal à this
	//
	// Contrat : le test ne ce fait que sur l'attribut nomFic !
	//

	bool AddLigne( int numLigne );
	// Mode d'emploi : Ajoute un numéro de ligne au vecteur de numéros de 
	// lignes. Incrémente nbNumLignes. 
	// Renvoie faux si numéro déja existant, vrai sinon.
	//
	// Contrat : numLigne est strictement positif.
	//			 les numéros sont supposés triés par ordre croissant et
	// numLigne est supposé être plus grand que tous les numéros du vector
	//

  	// Fonction();
	// Mode d'emploi :
	//
	// Contrat : 
	//

//-------------------------------------------- Constructeurs - destructeur

	Fichier( const Fichier & unFichier );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// unFichier
	//
	// Contrat :
	//

	Fichier ( string unNom );
	// Mode d'emploi : constructeur 
	//
	// Contrat :
	//

    virtual ~Fichier ( );
	// Mode d'emploi (destructeur) :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Méthodes protégées	
	
//----------------------------------------------------- Attributs protégés

	string nomFic;
	int nbNumLignes;
	vector <int> *numLignes;
};

//----------------------- Autres définitions dépendantes de <Fichier>

#endif // FICHIER_H