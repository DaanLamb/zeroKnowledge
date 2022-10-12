#include "prover.ih"

Prover::Prover(bool verbose)
:
  d_rng{},
  d_tempValue{},
  d_verbose{verbose}
{
  d_secret = d_rng.randomInRange(minRange, maxRange);
  d_generator = d_rng.randomInRange(minRange, maxRange);
  d_prime = producePrime();
  d_pubValue = ::modularExp(d_generator, d_secret, d_prime);
}
