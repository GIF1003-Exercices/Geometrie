/*
 * Forme2D.h
 *
 *  Created on: Dec 4, 2020
 *      Author: etudiant
 */

#ifndef FORME2D_H_
#define FORME2D_H_

#include "Forme.h"

namespace Geo {

/*
 * Classe abstraite Forme2D qui regroupe toutes les formes à deux dimensions.  C'est un cas particulier de Forme dont elle hérite.
 * Ses classes dérivées devront implémenter la méthode aire().
 */

class Forme2D : public Forme {
public:

	/* Constructeur */

	Forme2D() : Forme() {}

	/* Mesure: aire */

	virtual double aire() const = 0;

	/* Destructeur */

	virtual ~Forme2D() {}

};

} /* namespace Geo */

#endif /* FORME2D_H_ */
