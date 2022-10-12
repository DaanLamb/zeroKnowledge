#ifndef INCLUDE_VERIFIER_
#define INCLUDE_VERIFIER_

#include "randomGen/randomGen.h"
#include "prover/prover.h"

class Verifier
{
  RandomGen d_rng;
  Prover& d_pvr;
  bool d_verbose;
  int d_generator;
  int d_prime;
  int d_pubValue;
  float d_chance;
  public:
    Verifier(Prover& pvr, bool verbose);
    bool singleCheck();
    void verifyProver(int cycles);
};

#endif
