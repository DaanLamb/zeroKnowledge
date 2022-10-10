#ifndef INCLUDE_RANDOMGEN_
#define INCLUDE_RANDOMGEN_

#include <random>

// class setup for random generation of numbers using a random device and mt19937

class RandomGen
{
  std::mt19937 d_rng;

  public:
    RandomGen();
    int randomInRange(int startRange, int endRange);
};


#endif
