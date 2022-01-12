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

//! Ensures the existence of a `verb()` function
template<typename T>
concept can_be_attribute = requires(T t) { t.verb(); };

/**
 * @brief Create a new attribute
 * @tparam T A specific attribute type
 *
 * Create an attribute based on a type.
 */
template<typename T> requires can_be_attribute<T>
class CAttribute {
	T attribute = T(false);
	std::string_view sSpecies;
public:
	CAttribute(std::string_view _sSpecies, const bool bCanPerform) {
		attribute = T(bCanPerform);
		sSpecies = _sSpecies;
	}

	//! Performs the action specified by the attribute.
	constexpr void perform() {
		fmt::print("{} {}\n", sSpecies, attribute.verb());
	}
};


#endif //DESIGN_PATTERNS_ATTRIBUTE_HPP
