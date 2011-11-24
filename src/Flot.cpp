/*************************************************************************
                           Flot  -  description
                             -------------------
    debut                : Nov. 2011
    copyright            : (C) 2011 par Tristan Pourcelot & Jordan Vincent 
*************************************************************************/

//-- Realisation de la classe <Flot> (fichier Flot.cpp) ----

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>
#include <fstream>
#include <locale>
//------------------------------------------------------ Include personnel
#include "Flot.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

void Flot::RemplirMotsCles(string nomFicMC, RefCroisees &uneRefMotsCles)
// Algotithme : parcours de nomFicMC et remplissage de RefMotsCles
{
	string id,ligne;
	bool comIdPrec = false, comIdActu = false;

	ifstream fichier(nomFicMC.c_str(), ios::in);

	if (fichier)
	{	
		while (getline( fichier, ligne, '\n'))
		{
			while (!ligne.empty())
			{
			id = FindNextId(ligne, comIdActu);
			if (IdValide(id) && ! comIdPrec )
				{
					uneRefMotsCles.AddReference(id);
				}
			comIdPrec = comIdActu;
			}			
		} 	
		fichier.close(); 
	}
	else cerr << "/// Impossible d'ouvrir le fichier " << nomFicMC << " ///" << endl;
} // ----- Fin de RemplirMotsCles

void Flot::CreerRefCrois(string nomFic, RefCroisees &uneRefMotsCles, 
							RefCroisees &desRefCroisees, bool exclure)
// Algorithme : parcours de nomFic et comparaison des identificateurs avec 
// ceux de RefMotsCles.
{
	string id,ligne;
	int numLigne = 0;	
	bool comIdPrec = false, comIdActu = false;

	ifstream fichier(nomFic.c_str(), ios::in);

	if (fichier)
	{
		while (getline( fichier, ligne, '\n'))
		{
			numLigne++;
			while (!ligne.empty())
			{
			id = FindNextId(ligne, comIdActu);
			if (IdValide(id) && ! comIdPrec )
				{	
					// Les identificateurs sont ceux de desRefCroisees
					if (! exclure && uneRefMotsCles.FindReference(id))
					{
						desRefCroisees.AddReference(id,numLigne,nomFic.c_str());					
					}
					// Les identificateurs sont tous sauf ceux de desRefCroisees
					else if (exclure && ! uneRefMotsCles.FindReference(id))
					{						
						desRefCroisees.AddReference(id,numLigne,nomFic.c_str());
					}
				}
			comIdPrec = comIdActu;
			}			
		} 

		fichier.close(); 
	}
	else cerr << "/// Impossible d'ouvrir le fichier " << nomFic << " ///" << endl;

} // ----- Fin de CreerRefCrois

string Flot::FindNextId(string &phrase, bool & comActif)
// Algorithme : parcours de phrase jusqu'a trouver un caractere special
{
	string	mot;
	int		i = 0;
	char	lettre = phrase[i];
	bool	comment = comActif;
	
	while ( (i < phrase.length()-1) && ( std::isalnum(lettre,std::locale()) || lettre == '_'))
	{		
		i++;
		lettre = phrase[i];
	}

	// Fin de phrase ne se terminant pas par un separateur
	if ( std::isalnum(lettre,std::locale()) || lettre == '_') i++;

	mot = phrase.substr(0,i);

	
	// Cas fin de commentaire '*/'
	if (lettre == '*' && comment == true)
	{
		if (phrase.length() >= i+2)
		{
			if ( phrase[i+1] == '/') 
			{
				phrase.erase(0,i+2);
				comment = false;
			}
			else phrase.erase(0,i+1);
		}
		else phrase.erase();
	}

	// Cas commentaire '/*' et '*/' non trouvee
	else if (comment == true)
	{
		phrase.erase(0,i+1);
	}

	// Cas des commentaires
	else if (lettre == '/' )
	{
		if (phrase.length() >= i+2)
		{
			// Cas des commentaires '//'
			if ( phrase[i+1] == '/') phrase.erase();
			// Cas des commentaires '/* */'
			else if ( phrase[i+1] == '*') 
			{
				phrase.erase(0,i+2);
				comment = true;
			}
			else phrase.erase(0,i+1);
		}
		else phrase.erase();
	}

	// Cas des chaines de caracteres
	else if (lettre == '"' && i < phrase.length()-1)
	{
		i++;
		lettre = phrase[i];
		while ( (i < phrase.length()-1) && lettre != '"')
		{		
			i++;
			lettre = phrase[i];
		}
		phrase.erase(0,i+1);
	}
	// Debut de phrase commencant par un separateur
	else if (i == 0) phrase.erase(0,1);

	// cas general
	else phrase.erase(0,i);


	comActif =	comment;
	return		mot;
} //----- Fin de IdValide

bool Flot::IdValide( string nomId )
// Algorithme : Trivial
{
	if (nomId.empty())								return 0;
	else if (std::isdigit(nomId[0],std::locale()))	return 0;
	else											return 1;
} //----- Fin de IdValide

//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE

//---------------------------------------
