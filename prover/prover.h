#ifndef INCLUDE_PROVER_
#define INCLUDE_PROVER_

#include <cmath>
#include <iostream>
#include "randomGen/randomGen.h"

class Prover
{
  const int minRange = std::pow(10, 5); // minimum value for the values
  const int maxRange = std::pow(10, 9); // minimum value for the values
  RandomGen d_rng;
  int d_secret;
  int d_generator;
  int d_prime;
  int d_value;

  public:
    Prover();
    void sendInfo();
    void proveKnowledge();
  private:
    int producePrime();
    bool testPrime(int candidate);
    bool powerLoop(const int s, int x, const int candidate); // support function for testPrime

  friend std::ostream& operator<<(std::ostream& os, const Prover& pvr);
};


#endif
