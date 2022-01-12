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
#include "FlyAttribute.hpp"

//! A duck can quack and fly!
class CDuck : public CBird {
	CAttribute<CFlyWithWings> flyAttribute;
	CAttribute<CQuackAttribute> quackAttribute;
public:
	CDuck() :
			CBird("Duck"),
			flyAttribute(CAttribute<CFlyWithWings>(sSpecies, true)),
			quackAttribute(CAttribute<CQuackAttribute>(sSpecies, true)) {
	}

public:

	//! Make the duck quack
	void performTalk() override {
		quackAttribute.perform();
	}

	//! Make the duck run
	void performFly() override {
		flyAttribute.perform();
	}
};


#endif //DESIGN_PATTERNS_DUCK_HPP
