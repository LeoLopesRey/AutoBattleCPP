#include "RandomUtils.h"
#include <random>

using namespace std;

int AutoBattle::Utils::RandomUtils::GetRandomInt(const int Min, const int Max)
{
    random_device Rand;  // Seed for the random number generator
    mt19937 Gen(Rand()); // Mersenne Twister engine
    uniform_int_distribution<> Distribution(Min, Max);

    return Distribution(Gen);
}
