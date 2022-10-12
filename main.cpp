#include "main.h"

int main ()
{
  Prover proverInstance{false};
  //cout << proverInstance;
  Verifier verifierInstance{proverInstance, false};
  verifierInstance.verifyProver(4);
  return 0;
}
