#include "prover.ih"

int Prover::modularExp(int base, int exp, const int mod)
{
  int res = 1; // initialize result
  while (exp > 0)
  {
    if( exp & 1 )
      res = (res * base) % mod;
    exp = exp >> 1;
    base = (base * base) % mod;
  }
  return res;
}
