#ifndef INCLUDE_PROVER_
#define INCLUDE_PROVER_

# include <iostream>

class Prover
{
  public:
    Prover();
    void sendHash();
    void proveKnowledge();
  private:
    const int secret;
    int produceSecret();
    bool testPrime();

}


#endif
