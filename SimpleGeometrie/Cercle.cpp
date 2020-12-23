/*
 * Cercle.cpp
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#include "Cercle.h"
#include <sstream>

namespace Geo {

/*
 * Classe cercle: une boule à 2 dimensions.  Possède une aire, et est affichable.
 */

std::string Cercle::afficher() const {
	std::stringstream os ;
	os << "Cercle de rayon: " << m_rayon;
	return os.str();
}

double Cercle::aire() const {
	return 3.1415928 * m_rayon * m_rayon ;
}


} /* Namespace Geo */
