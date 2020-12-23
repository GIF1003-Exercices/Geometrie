/*
 * Boule.h
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#ifndef BOULE_H_
#define BOULE_H_

#include "Forme.h"
#include "ContratException.h"

namespace Geo {

/*
 * classe Boule: classe abstraite dérivée de forme. Regroupe tous les cercles, les sphères, etc
 * Possède un seul attribut: m_rayon le rayon qui doit être positif en tout temps.
 */

class Boule : public Forme{
public:
	Boule(double p_rayon) : Forme(), m_rayon(p_rayon){ PRECONDITION( p_rayon >= 0); } ;
	virtual ~Boule() {} ;

protected:
	double m_rayon;

private:
	void verifieInvariant() const ;
};

} /* namespace Geo */

#endif /* BOULE_H_ */
