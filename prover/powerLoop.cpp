#include "prover.ih"
// support function for testPrime
bool Prover::powerLoop(const int s, int x, const int candidate)
{
  for (int powOfTwo = 0; powOfTwo < s; powOfTwo++)
  {
    x = (x * x) % candidate;
    if (x == candidate - 1)
      return true;
  }
  return false;
}
