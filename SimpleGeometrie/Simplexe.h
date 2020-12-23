/*
 * Simplexe.h
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#ifndef SIMPLEXE_H_
#define SIMPLEXE_H_

#include "Forme.h"
#include "ContratException.h"

namespace Geo {

/*
 * Classe Simplexe: classe abstraite dérivée de Forme.  Regroupe tous les simplexes, c'est < dire les formes
 * telles carré, cube, tesseract, hypercube...
 *
 * Possède un seul attribut: m_cote la longueur d'un côté qui doit être positive en tout temps.
 */

class Simplexe : public Forme {
public:
	Simplexe(double p_cote) : Forme(), m_cote(p_cote) { PRECONDITION( p_cote >= 0 ); } ;

	virtual ~Simplexe() {} ;

protected:
	double m_cote ;

private:
	void verifieInvariant() const ;
};

} /* namespace Geo */

#endif /* SIMPLEXE_H_ */
