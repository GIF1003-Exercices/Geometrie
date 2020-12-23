/*
 * Boule.cpp
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#include "Boule.h"
#include "ContratException.h"

namespace Geo {

void Boule::verifieInvariant() const
{
	INVARIANT(m_rayon > 0);
}

} /* namespace Geo */
