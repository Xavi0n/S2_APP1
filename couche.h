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

class Couche
{
	private:
		unsigned char State;
		float totalArea;
	public:
		Couche();
		~Couche();
		//int storeShapes();
		bool AddShape();
		bool RemoveShape();
		//int GetShape(int VecIndex) const;
		float GetTotalArea() const;
		bool MoveLayer(int deltaX, int deltaY);
		bool ResetLayer();
		bool SetState(unsigned char newState);
		//DisplayLayer();
	unsigned char State;
};

#endif
