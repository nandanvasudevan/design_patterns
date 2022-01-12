//! @file: strategy_pattern.hpp
//! @brief: A simple example for the strategy pattern
// 
// Created by: nandanv
// Created at: 12/01/2022 04:40
//

#ifndef DESIGN_PATTERNS_BIRD_HPP
#define DESIGN_PATTERNS_BIRD_HPP

#include "fmt/core.h"
#include <string_view>

#include "Attribute.hpp"

/**
 * @brief Make birds!
 */
class CBird {
public:

	/**
	 * @brief Create a new bird.
	 * @param sSpeciesName A name to know it by.
	 */
	CBird(std::string_view sSpeciesName) {
		sSpecies = sSpeciesName;
	}

	//! Try to make the bird talk
	virtual void performTalk() = 0;

	//! Try to make the bird fly
	virtual void performFly() = 0;

protected:

	//! The species it belongs to.
	std::string sSpecies;
};


#endif //DESIGN_PATTERNS_BIRD_HPP
