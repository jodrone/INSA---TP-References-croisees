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
	void DisplayFichier() const;
	// Mode d'emploi : Affiche sur la sortie standard la liste des numeros
	// de lignes associes au fichier.
	//

	bool operator==(Fichier const & unFichier) const;
	// Mode d'emploi : renvoie vrai unFichier est �gal � this
	//
	// Contrat : le test ne ce fait que sur l'attribut nomFic !
	//

	bool AddLigne( int numLigne );
	// Mode d'emploi : Ajoute un num�ro de ligne au vecteur de num�ros de 
	// lignes. Incr�mente nbNumLignes. 
	// Renvoie faux si num�ro d�ja existant, vrai sinon.
	//
	// Contrat : numLigne est strictement positif.
	//			 les num�ros sont suppos�s tri�s par ordre croissant et
	// numLigne est suppos� �tre plus grand que tous les num�ros du vector
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
//----------------------------------------------------- M�thodes prot�g�es	
	
//----------------------------------------------------- Attributs prot�g�s

	string nomFic;
	vector <int> *numLignes;
};

//----------------------- Autres d�finitions d�pendantes de <Fichier>

#endif // FICHIER_H
