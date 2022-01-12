#include "strategy_pattern/Duck.hpp"

void
strategy_pattern();

int
main() {
	strategy_pattern();
	return 0;
}

/**
 * @brief Runs the strategy pattern implementation.
 */
void
strategy_pattern() {

	// Default strategy
	{
		CDuck duck;

		duck.performFly();
		duck.performTalk();
	}

	// Strategy for creating a duck that cannot fly or talk
	{
		CDuck duck_cannotFly(CFlyAttribute(false),CTalkAttribute(true));

		duck_cannotFly.performFly();
		duck_cannotFly.performTalk();
	}

	// Strategy for creating a duck that can fly with its wings and quack.
	{
		CDuck duck_canFlyAndQuack(CFlyWithWings(true), CQuackAttribute(true));

		duck_canFlyAndQuack.performFly();
		duck_canFlyAndQuack.performTalk();
	}
}
