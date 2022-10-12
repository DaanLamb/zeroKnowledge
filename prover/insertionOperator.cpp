#include "prover.ih"

std::ostream& operator<<(std::ostream& out, const Prover& pvr)
{
  return out << "secret: " << pvr.d_secret << '\n'
             << "generator: " << pvr.d_generator << '\n'
             << "prime: " << pvr.d_prime << '\n'
             << "value: " << pvr.d_pubValue << '\n';
}
