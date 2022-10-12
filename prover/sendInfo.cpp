#include "prover.ih"

PubInfo Prover::sendInfo()
{
  PubInfo info;
  info.generator = d_generator;
  info.prime = d_prime;
  info.pubValue = d_pubValue;
  return info;
}
