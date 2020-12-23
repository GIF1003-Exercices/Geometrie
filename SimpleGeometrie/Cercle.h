/*
 * Cercle.h
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#ifndef CERCLE_H_
#define CERCLE_H_

#include "Forme2D.h"
#include "Boule.h"

namespace Geo {

class Cercle : public Forme2D, public Boule {
public:
	Cercle(double p_rayon) : Forme2D(), Boule(p_rayon) {} ;

	std::string afficher() const override ;

	double aire() const override ;

	virtual ~Cercle() {} ;
};

} /* namespace Geo */

#endif /* CERCLE_H_ */
