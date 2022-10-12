#include "prover.ih"

int Prover::sendTemp()
{
  int tempValue = d_tempValue;
  if (d_verbose)
    cout << "Prover produced sends over temp value: " << tempValue << endl;
  d_tempValue = d_rng.randomInRange(minRange, d_prime - 2); // sets the tempvalue to 0 so it cannot be accesed again, and another call to sendTempPlusSecret does not share the secret
  return tempValue;
}
