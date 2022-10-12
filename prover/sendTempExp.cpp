#include "prover.ih"

int Prover::sendTempExp()
{
  d_tempValue = d_rng.randomInRange(minRange, d_prime - 2); // get a random tempValue
  int tempExp = ::modularExp(d_generator, d_tempValue, d_prime);
  if (d_verbose)
    cout << "prover chose a temporary value and send over generator ^ temp % prime\n"
         << "this value is: " << tempExp << endl;
  return tempExp;
}
