//! @file: attribute.hpp
//! @brief: 
// 
// Created by: nandanv
// Created at: 12/01/2022 04:44
//

#ifndef DESIGN_PATTERNS_ATTRIBUTE_HPP
#define DESIGN_PATTERNS_ATTRIBUTE_HPP

#include "fmt/core.h"
#include <string_view>

template <typename T>
concept can_be_attribute = requires (T t) {t.verb(); };

template <typename T>
requires can_be_attribute<T>
class CAttribute {
	T attribute = T(false);
	std::string_view sSpecies;
public:
	CAttribute(std::string_view _sSpecies, const bool bCanPerform) {
		attribute = T(bCanPerform);
		sSpecies = _sSpecies;
	}

	void perform() {
		fmt::print("{} {}\n", sSpecies, attribute.verb());
	}
};

class CFlyAttribute {
public:
	explicit CFlyAttribute(const bool bCanFly) {
		if (bCanFly) {
			sFlying = "can fly";
		} else {
			sFlying = "cannot fly";
		}
	}

	virtual std::string_view verb() = 0;

protected:
	std::string sFlying;
};

class CFlyWithWings: public CFlyAttribute
{
public:
	CFlyWithWings(const bool bCanFly):
			CFlyAttribute(bCanFly)
	{
		sFlying += " with wings";
	}

	std::string_view verb() override
	{
		return sFlying;
	}
};


#endif //DESIGN_PATTERNS_ATTRIBUTE_HPP
