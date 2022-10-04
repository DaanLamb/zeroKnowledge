#include "prover.ih"

Prover::Prover()
{
  d_secret = produceSecret();
  cout << d_secret << endl;
}
