#include "randomGen.ih"

int RandomGen::randomInRange(int startRange, int endRange)
{
  uniform_int_distribution<mt19937::result_type> distRange(startRange, endRange); // uniform distribution over the range
  return distRange(d_rng);
}
