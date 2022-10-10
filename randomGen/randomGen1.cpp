#include "randomGen.ih"

RandomGen::RandomGen()
{
  random_device dev;
  d_rng = mt19937(dev());
}
