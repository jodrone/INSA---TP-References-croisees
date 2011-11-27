/*************************************************************************
                           Fichier  -  description
                             -------------------
    dï¿½but                : ...
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Fichier> (fichier Fichier.h) --
#if ! defined ( FICHIER_H )
#define FICHIER_H

//--------------------------------------------------- Interfaces utilisï¿½es
#include <vector>
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rï¿½le de la classe <Fichier>
// 
// La classe Fichier a pour rï¿½le de reprï¿½senter les occurences d'un fichier 
// pour un identificateur donnï¿½.
//
//------------------------------------------------------------------------ 

class Fichier 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Mï¿½thodes publiques
	void DisplayFichier() const;
	// Mode d'emploi : Affiche sur la sortie standard la liste des numeros
	// de lignes associes au fichier.
	//

	bool operator==(Fichier const & unFichier) const;
	// Mode d'emploi : renvoie vrai unFichier est ï¿½gal ï¿½ this
	//
	// Contrat : le test ne ce fait que sur l'attribut nomFic !
	//

	bool AddLigne( int numLigne );
	// Mode d'emploi : Ajoute un numï¿½ro de ligne au vecteur de numï¿½ros de 
	// lignes. Incrï¿½mente nbNumLignes. 
	// Renvoie faux si numï¿½ro dï¿½ja existant, vrai sinon.
	//
	// Contrat : numLigne est strictement positif.
	//			 les numï¿½ros sont supposï¿½s triï¿½s par ordre croissant et
	// numLigne est supposï¿½ ï¿½tre plus grand que tous les numï¿½ros du vector
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
	// Initialise nomFic et met numLignes à NULL
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
//----------------------------------------------------- Mï¿½thodes protï¿½gï¿½es	
	
//----------------------------------------------------- Attributs protï¿½gï¿½s

	string nomFic;
	// nom du fichier

	vector <int> *numLignes;
	// Pointeur sur un tableau dynamique de numeros de lignes tries par ordre 
	// croissant.
};

//----------------------- Autres dï¿½finitions dï¿½pendantes de <Fichier>

#endif // FICHIER_H
