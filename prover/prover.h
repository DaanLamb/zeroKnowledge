#ifndef INCLUDE_PROVER_
#define INCLUDE_PROVER_

#include <iostream>
#include <cmath>

class Prover
{
  public:
    Prover();
    void sendHash();
    void proveKnowledge();
  private:
    const int minSecret = std::pow(10, 5) // minimum value for the secret
    const int secret;
    int produceSecret();
    bool testPrime(int candidate);
}


#endif
