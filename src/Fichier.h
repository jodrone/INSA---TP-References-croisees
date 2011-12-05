/*************************************************************************
                           Fichier  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Interface de la classe <Fichier> (fichier Fichier.h) --
#if ! defined ( FICHIER_H )
#define FICHIER_H

//--------------------------------------------------- Interfaces utilisees
#include <vector>
#include <string>
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Role de la classe <Fichier>
// 
// La classe Fichier a pour role de representer les occurences d'un fichier 
// pour un identificateur donne.
//
//------------------------------------------------------------------------ 

class Fichier 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
	void DisplayFichier() const;
	// Mode d'emploi : Affiche sur la sortie standard la liste des numeros
	// de lignes associes au fichier.
	//

	bool operator==(Fichier const & unFichier) const;
	// Mode d'emploi : renvoie vrai unFichier est egal ou this
	//
	// Contrat : le test ne ce fait que sur l'attribut nomFic !
	//

	bool AddLigne( int numLigne );
	// Mode d'emploi : Ajoute un numero de ligne au vecteur de numeros
	// de lignes. Incremente nbNumLignes. 
	// Renvoie faux si numero deja existant, vrai sinon.
	//
	// Contrat : numLigne est strictement positif.
	//		les numeros sont supposes tries par ordre croissant
	//		et numLigne est suppose etre plus grand que tous les
	//		numeros du vector


//-------------------------------------------- Constructeurs - destructeur

	Fichier( const Fichier & unFichier );
	// Mode d'emploi (constructeur de copie) : construit une copie de 
	// unFichier
	// Contrat :

	Fichier ( string unNom );
	// Mode d'emploi : constructeur 
	// Initialise nomFic et met numLignes a NULL

    virtual ~Fichier ( );
	// Mode d'emploi (destructeur) :

//------------------------------------------------------------------ PRIVE 
protected:
//----------------------------------------------------- Methodes protegees	
	
//----------------------------------------------------- Attributs proteges

	string nomFic;
	// nom du fichier

	vector <int> *numLignes;
	// Pointeur sur un tableau dynamique de numeros de lignes tries
	// par ordre  croissant.
};

//----------------------- Autres definitions dependantes de <Fichier>

#endif // FICHIER_H
