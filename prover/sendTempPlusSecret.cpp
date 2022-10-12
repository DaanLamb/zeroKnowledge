#include "prover.ih"

int Prover::sendTempPlusSecret()
{
  int tempValuePlusSecret = ((long long)d_secret + d_tempValue) % (d_prime - 1); // cast as long to prevent overflow if secret and tempValue are large
  if (d_verbose)
    cout << "Prover sends over the temp value plus a secret: " << tempValuePlusSecret << endl;
  d_tempValue = d_rng.randomInRange(minRange, d_prime - 2);// sets the tempvalue to 0 so it cannot be accesed again, and another call to sendTemp does not share the secret
  return tempValuePlusSecret;
}
