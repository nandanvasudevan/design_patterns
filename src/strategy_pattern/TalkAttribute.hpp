//! @file: c_quack_attribute.hpp
//! @brief: 
// 
// Created by: nandanv
// Created at: 12/01/2022 05:10
//

#ifndef DESIGN_PATTERNS_TALKATTRIBUTE_HPP
#define DESIGN_PATTERNS_TALKATTRIBUTE_HPP

#include <string_view>
#include <string>

class CTalkAttribute {
public:
	explicit CTalkAttribute(const bool bCanTalk) {
		if (bCanTalk) {
			sTalking = "can talk";
		} else {
			sTalking = "cannot talk";
		}
	}

	virtual std::string_view verb() = 0;

protected:
	std::string sTalking;
};

class CQuackAttribute : CTalkAttribute {
public:
	explicit CQuackAttribute(const bool bCanQuack) :
			CTalkAttribute(bCanQuack) {
		sTalking += " \"quack quack\"";
	}

	std::string_view verb() override {
		return sTalking;
	}
};

#endif //DESIGN_PATTERNS_TALKATTRIBUTE_HPP
