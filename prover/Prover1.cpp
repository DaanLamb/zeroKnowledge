#include "prover.ih"

Prover::Prover()
{
  d_secret = produceSecret();
}
