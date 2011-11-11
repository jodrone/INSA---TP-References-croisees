/*************************************************************************
                           Fichier  -  description
                             -------------------
    d�but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Fichier> (fichier Fichier.h) --
#if ! defined ( FICHIER_H )
#define FICHIER_H

//--------------------------------------------------- Interfaces utilis�es
#include <vector>
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// R�le de la classe <Fichier>
// 
// La classe Fichier a pour r�le de repr�senter les occurences d'un fichier 
// pour un identificateur donn�.
//
//------------------------------------------------------------------------ 

class Fichier 
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
//----------------------------------------------------- Attributs prot�g�s

	string nomFic;
	int nbNumLignes;
	vector <int> *numLignes;
};

//----------------------- Autres d�finitions d�pendantes de <Fichier>

#endif // FICHIER_H