#include "prover.ih"
// This uses a deterministic Miller-Rabin test to check for primality
bool Prover::testPrime(int candidate)
{
  // bases to test against for deterministic miller rabin test
  // from https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test
  vector<int> baseVector = {2, 3, 5, 7};
  // rewrite to n == 2^s * d + 1
  int d = candidate - 1;
  int s = 0;
  while (!(d & 1))
  {
    s++;
    d >>= 1;
  }

  int x;
  for (int base : baseVector)
  {
    x = ::modularExp(base, d, candidate);
    if (x == 1 || x == candidate - 1)
    {
      continue;
    }
    if (powerLoop(s, x, candidate))
      continue;
    return false;
  }
  return true;
}
