/*
 * Carre.cpp
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#include "Carre.h"
#include <sstream>

namespace Geo {

std::string Carre::afficher() const {
	std::stringstream os ;
	os << "Carré de côté: " << m_cote;
	return os.str();
}

double Carre::aire() const {
	return m_cote * m_cote ;
}

} /* namespace Geo */
