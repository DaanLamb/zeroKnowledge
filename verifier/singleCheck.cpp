#include "verifier.ih"

bool Verifier::singleCheck()
{
  if (d_verbose)
    cout << "*******************************\n\n"
         << "Verifier requests the exponent of a temp value\n";
  int tempExp = d_pvr.sendTempExp();
  if (d_rng.randomInRange(0,1))
  {
    // simply checks wheter the temp value creates the exponent
    if (d_verbose)
      cout << "Verifier requests temp value and uses it to wether the expression \n"
           << "temp exponent == generator ^ temp value % prime is satisfied";
    int temp = d_pvr.sendTemp();
    if ( tempExp == ::modularExp(d_generator, temp, d_prime) )
    {
      if (d_verbose)
        cout << "The check succeeded\n";
      return true;
    }
  } else
  {
    // check wether temp exponent * public value == generator ^ ((secret + tempvalue) % (prime - 1))
    if (d_verbose)
      cout << "Verifier requests (secret + temp value) mod (p - 1) and uses it to wether the expression \n"
           << "temp exponent * public value == generator ^ ((secret + temp value) % (prime - 1)) is satisfied";
    int tempPlusSecret = d_pvr.sendTempPlusSecret();
    int productExpr = (((long long)tempExp * d_pubValue) % d_prime);
    int expoExpr = ::modularExp(d_generator, tempPlusSecret, d_prime);
    if ( productExpr == expoExpr )
    {
      if (d_verbose)
        cout << "The check succeeded\n";
      return true;
    }
  }
  return false;
}
