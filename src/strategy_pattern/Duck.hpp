//! @file: c_duck.hpp
//! @brief: 
// 
// Created by: nandanv
// Created at: 12/01/2022 05:00
//

#ifndef DESIGN_PATTERNS_DUCK_HPP
#define DESIGN_PATTERNS_DUCK_HPP

#include "Bird.hpp"
#include "TalkAttribute.hpp"

class CDuck : public CBird {
	CAttribute<CFlyWithWings> flyAttribute;
	CAttribute<CQuackAttribute> quackAttribute;
public:
	CDuck() :
			CBird("Duck"),
			flyAttribute(CAttribute<CFlyWithWings>(sSpecies, true)),
			quackAttribute(CAttribute<CQuackAttribute>(sSpecies, true))
	{
	}

public:

	void performQuack() override {
		quackAttribute.perform();
	}

	void performFly() override {
		flyAttribute.perform();
	}
};


#endif //DESIGN_PATTERNS_DUCK_HPP
