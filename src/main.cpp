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
	CDuck duck;

	duck.performFly();
	duck.performTalk();
}
