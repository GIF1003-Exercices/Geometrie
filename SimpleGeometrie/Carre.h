/*
 * Carre.h
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#ifndef CARRE_H_
#define CARRE_H_

#include "Forme2D.h"
#include "Simplexe.h"

namespace Geo {

/*
 * Classe Carre: simplexe à deux dimensions.  Possède une aire et est affichable.
 */

class Carre : public Forme2D, public Simplexe {
public:

	/* Constructeur */

	Carre(double p_cote) : Forme2D(), Simplexe(p_cote) {};

	/* Afficher */

	std::string afficher() const override ;

	/* Mesure de l'aire */

	double aire() const override ;

	/* Destructeur */

	virtual ~Carre() {}
};

} /* namespace Geo */

#endif /* CARRE_H_ */
