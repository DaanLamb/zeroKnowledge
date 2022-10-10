#include "prover.ih"

Prover::Prover()
:
  d_rng{}
{
  d_secret = d_rng.randomInRange(minRange, maxRange);
  d_generator = d_rng.randomInRange(minRange, maxRange);
  d_prime = producePrime();
  d_value = ::modularExp(d_generator, d_secret, d_prime);
}
