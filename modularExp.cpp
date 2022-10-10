int modularExp(int base, int exp, const int mod)
{
  int res = 1; // initialize result
  base = base % mod;
  while (exp > 0)
  {
    if( exp & 1 )
      res = ((unsigned long long)res * base) % mod; // casting because value can overflow before the modulo
    exp = exp >> 1;
    base = ((unsigned long long)base * base) % mod; // casting because value can overflow before the modulo
  }
  return res;
}
