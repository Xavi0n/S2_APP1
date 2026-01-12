/********
 * Fichier: couche.h
 * Auteurs: BOUS0086 & CHAX6081
 * Date: 6 janvier 2026
 * Description: Déclaration de la classe pour une couche dans un
 *    canevas. La classe Couche gère un vecteur de pointeurs de formes
 *    géométriques en accord avec les spécifications de Graphicus.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#define INITIALIZED 0
#define ACTIVE 1
#define INACTIVE 2

#include "vecteur.h" 

class Couche
{
	private:
		Vector VectorCouche;
		unsigned char State;
		float totalArea;
	public:
		Couche();
		~Couche();
		//int storeShapes();
		bool AddShape(forme* Shape);
		int RemoveShape(int index);
		Forme* GetShape(int VecIndex) ;
		double GetTotalArea();
		bool MoveLayer(int deltaX, int deltaY);
		bool ResetLayer();
		bool SetState(int newState);
		void DisplayLayer(std::ostream& out);    
	unsigned char State;
};

#endif
