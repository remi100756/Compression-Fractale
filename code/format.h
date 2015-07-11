#ifndef FORMAT
#define FORMAT

/* *************** Définition de structures *************** */

typedef struct Coordonnees Coordonnees;
struct Coordonnes {
	int x;
	int y;
};

typedef struct Transformation Transformation;
struct Transformation {
	/* Décrit une transformation affine appliquée à un bloc
	 *  - translation : le décalage de la rotation avec le centre du bloc
	 *  - rotation : en degrés
	 *  - decalage : le décalage de couleur à ajouter
	 */
	int rotation;
	Coordonnes translation;
	int decalage;
};
#define ROTATION(rot) {rot, {0,0}, 0} // Initialisation d'une transformation de type rotation

typedef struct Source Source;
struct Source {
	/* Décrit un couple bloc/transformation
	 *  - bloc : les coordonnées du bloc a choisir dans l'image
	 *  - transformation : le type de transformation a y appliquer
	 */
	int bloc;
	Transformation transformation;
};

typedef struct LinReg LinReg;
struct LinReg {
	double a, b;
};

/* *************** Fonctions *************** */

int couleurLinReg(const LinReg& droite, int couleur);

#endif
