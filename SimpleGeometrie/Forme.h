/*
 * file Forme.h
 *
 *  Created on: Dec 4, 2020
 *  Author:Pascal Charpentier
 */

#ifndef FORME_H_
#define FORME_H_

#include <string>

namespace Geo {

/*
 * Classe Forme: classe abstraite regroupant toutes les formes géométriques.  Les classes dérivées devront implémenter
 * la méthode virtuelle pure afficher()
 */

class Forme {
public:

	/* Constructeur */

	Forme() {}

	/* Affichage */

	virtual std::string afficher() const = 0;

	/* Destructeur */

	virtual ~Forme() {}
};

} /* namespace Geo */

#endif /* FORME_H_ */
