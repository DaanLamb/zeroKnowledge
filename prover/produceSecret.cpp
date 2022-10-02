#include "prover.ih"

int Prover::produceSecret()
{
  random_device dev;
  mt19937 rng(dev());
  uniform_int_distribution<std::mt19937::result_type> distCandidate(minSecret, MAXRAND); // a rng distributed over all candiates
  int candidate
  do
  {
    candidate = distCandidate(rng)
  } while (!testPrime(candidate))
  return candidate
}
