/*
 * DicoAnglaisFrancaisException.cpp
 *
 *  Created on: Dec 3, 2020
 *      Author: etudiant
 */
#include <string>
#include <vector>
#include "DicoAnglaisFrancaisException.h"


const char* MotNonTrouveException::what() const noexcept
{

	return "Ce mot est absent de ce dictionnaire." ;
}


