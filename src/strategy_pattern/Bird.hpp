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

class CBird {
public:
	CBird(std::string_view sSpeciesName) {
		sSpecies = sSpeciesName;
	}

	virtual void performQuack() = 0;

	virtual void performFly() = 0;
//	virtual void performRun() = 0;
protected:
	std::string sSpecies;
};


#endif //DESIGN_PATTERNS_BIRD_HPP
