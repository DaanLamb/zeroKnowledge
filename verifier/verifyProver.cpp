#include "verifier.ih"

void Verifier::verifyProver(int cycles)
{
  for (int i = 0; i < cycles; i++)
  {
    if (singleCheck())
    {
      d_chance *=  0.5;
    } else
    {
      d_chance = 1.0;
      cout << "Prover failed one of the checks, does not seem to have the proper knowledge" << endl;
      return;
    }
  }
  cout << "chance prover got these results without knowing secret value: " << d_chance << endl;
}
