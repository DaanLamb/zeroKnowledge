#include "verifier.ih"

Verifier::Verifier(Prover& pvr, bool verbose)
:
  d_rng{},
  d_chance{1.0},
  d_pvr{pvr},
  d_verbose{verbose}
{
  PubInfo info = d_pvr.sendInfo();
  d_generator = info.generator;
  d_prime = info.prime;
  d_pubValue = info.pubValue;
  if (d_verbose)
    cout << "Prover sends over the generator, prime and public value"
         << "These values are: " << d_generator << ", " << d_prime << ", " << d_pubValue << endl;
}
