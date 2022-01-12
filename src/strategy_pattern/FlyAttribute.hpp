//! @file: FlyAttribute.hpp
//! @brief: 
// 
// Created by: nandanv
// Created at: 12/01/2022 06:31
//

#ifndef DESIGN_PATTERNS_FLYATTRIBUTE_HPP
#define DESIGN_PATTERNS_FLYATTRIBUTE_HPP

#include <string_view>
#include "Attribute.hpp"

//! Abstract class for the fly attribute
class CFlyAttribute {
public:
	explicit CFlyAttribute(const bool bCanFly) {
		if (bCanFly) {
			sFlying = "can fly";
		} else {
			sFlying = "cannot fly";
		}
	}

	virtual std::string_view verb()
	{
		return sFlying;
	}

protected:
	std::string sFlying;
};

//! A 'strategy' for flying with wings.
class CFlyWithWings : public CFlyAttribute {
public:
	CFlyWithWings(const bool bCanFly) :
			CFlyAttribute(bCanFly) {
		sFlying += " with wings";
	}

	std::string_view verb() override {
		return sFlying;
	}
};

#endif //DESIGN_PATTERNS_FLYATTRIBUTE_HPP
