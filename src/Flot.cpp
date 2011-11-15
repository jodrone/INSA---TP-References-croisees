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
//------------------------------------------------------ Include personnel
#include "Flot.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

void Flot::RemplirMotsCles(string nomFicMC, RefCroisees &uneRefMotsCles)
// Algotithme : parcours de nomFicMC et remplissage de RefMotsCles
{
	string id,ligne;
	
	ifstream fichier(nomFicMC.c_str(), ios::in);

	if (fichier)
	{
		cout << "/// Ouverture du fichier ///" << endl;		
		while (getline( fichier, ligne, '\n'))
		{
			while (!ligne.empty())
			{
			id = FindNextId(ligne);
			if (IdValide(id))  
				{
					uneRefMotsCles.AddReference(id);
				}
			}			
		} 
	
		fichier.close(); 
		cout << "/// Fermeture du fichier ///" << endl;
	}
	else cerr << "/// Impossible d'ouvrir le fichier ///" << endl;
} // ----- Fin de RemplirMotsCles

void Flot::CreerRefCrois(string nomFic, RefCroisees &uneRefMotsCles, 
							RefCroisees &desRefCroisees, bool exclure)
// Algorithme : parcours de nomFic et comparaison des identificateurs avec 
// ceux de RefMotsCles.
{
	string id,ligne;
	int numLigne = 0;	

	ifstream fichier(nomFic.c_str(), ios::in);

	if (fichier)
	{
		cout << "/// Ouverture du fichier ///" << endl;	

		while (getline( fichier, ligne, '\n'))
		{
			numLigne++;
			while (!ligne.empty())
			{
			id = FindNextId(ligne);
			if (IdValide(id))  
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
			}			
		} 

		fichier.close(); 
		cout << "/// Fermeture du fichier ///" << endl;
	}
	else cerr << "/// Impossible d'ouvrir le fichier ///" << endl;

} // ----- Fin de CreerRefCrois

string Flot::ChercherId(string nomFic, RefCroisees &desRefCroisees)
// Algorithme : parcours du fichier, ligne par ligne
{
	string id,ligne,listeId;
	const char SEPARATOR('\n');
	int numLigne = 0;
	

	ifstream fichier(nomFic.c_str(), ios::in);

	if (fichier)
	{
		cout << "/// Ouverture du fichier ///" << endl;		
		while (getline( fichier, ligne, '\n'))
		{
			numLigne++;
			while (!ligne.empty())
			{
			id = FindNextId(ligne);
			if (IdValide(id))  
				{
					listeId += id;
					listeId += SEPARATOR;
					desRefCroisees.AddReference(id,numLigne,nomFic.c_str());
				}
			}			
		} 
		cout << listeId << endl;

		fichier.close(); 
		cout << "/// Fermeture du fichier ///" << endl;
		return listeId;
	}
	else cerr << "/// Impossible d'ouvrir le fichier ///" << endl;
	return "";
} //----- Fin de ChercherId

string Flot::FindNextId(string &phrase)
// Algorithme : parcours de phrase jusqu'a trouver un caractere special
{
	string	mot;
	int		i = 0 ;
	char	lettre = phrase[i];
	
	while ( (i < phrase.length()-1) && ( isalnum(lettre) || lettre == '_'))
	{		
		i++;
		lettre = phrase[i];
	}

	// Fin de phrase ne se terminant pas par un separateur
	if ( isalnum(lettre) || lettre == '_') i++;

	mot = phrase.substr(0,i);

	// Cas des commentaires
	// TODO : prendre en compte les /* */
	if (lettre == '/' && phrase[i+1] == '/') phrase.erase(0,phrase.length());
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
	// cas general
	else phrase.erase(0,i);

	// Debut de phrase commencant par un separateur
	if (i == 0) phrase.erase(0,1);

	return mot;
} //----- Fin de IdValide

bool Flot::IdValide( string nomId )
// Algorithme : Trivial
{
	if (nomId.empty())			return 0;
	else if (isdigit(nomId[0]))	return 0;
	else						return 1;
} //----- Fin de IdValide

//-------------------------------------------- Constructeurs - destructeur

//------------------------------------------------------------------ PRIVE

//---------------------------------------
