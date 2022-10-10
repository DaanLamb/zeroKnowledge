#include "prover.ih"

int Prover::producePrime()
{
  int candidate;
  do
  {
    candidate = d_rng.randomInRange(minRange, maxRange);
  } while (!testPrime(candidate));
  return candidate;
}
