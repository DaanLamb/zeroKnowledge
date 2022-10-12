#ifndef INCLUDE_PROVER_
#define INCLUDE_PROVER_

#include <cmath>
#include <iostream>
#include "randomGen/randomGen.h"

struct PubInfo
{
    int generator;
    int prime;
    int pubValue;
};

class Prover
{
  static const int minRange = std::pow(10, 5); // minimum value for the values
  static const int maxRange = std::pow(10, 9); // minimum value for the values
  RandomGen d_rng;
  bool d_verbose;
  int d_secret;
  int d_generator;
  int d_prime;
  int d_pubValue;
  int d_tempValue; // temporary value for the proving sequence

  public:
    Prover(bool verbose);
    PubInfo sendInfo(); // returns pubInfo to the verifier
    int sendTempExp(); // returns generator ^ tempValue mod prime, starting the proving procedure
    int sendTemp(); // returns tempValue, one of the expressions that the prover can ask for
    int sendTempPlusSecret(); // returns (secret + tempValue) mod (prime - 1), the other expressions the prover can ask for
  private:
    int producePrime();
    bool testPrime(int candidate);
    bool powerLoop(const int s, int x, const int candidate); // support function for testPrime

  friend std::ostream& operator<<(std::ostream& os, const Prover& pvr);
};


#endif
