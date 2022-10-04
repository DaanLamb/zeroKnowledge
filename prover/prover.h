#ifndef INCLUDE_PROVER_
#define INCLUDE_PROVER_

#include <iostream>
#include <cmath>

class Prover
{
  const int minSecret = std::pow(10, 5); // minimum value for the secret
  const int maxSecret = std::pow(10, 9); // minimum value for the secret
  const int d_secret;

  public:
    Prover();
    void sendHash();
    void proveKnowledge();
  private:
    int produceSecret();
    bool testPrime(int candidate);
    int modularExp(int base, int exp, const int mod);
    bool powerLoop(const int s, int x, const int candidate); // support function for testPrime
};


#endif
