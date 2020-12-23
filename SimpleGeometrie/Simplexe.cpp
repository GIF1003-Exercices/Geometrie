/*
 * Simplexe.cpp
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#include "Simplexe.h"
#include "ContratException.h"

namespace Geo {

void Simplexe::verifieInvariant() const
{
	INVARIANT(m_cote > 0) ;
}

} /* namespace Geo */
