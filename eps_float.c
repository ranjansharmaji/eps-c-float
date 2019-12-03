#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
void main()
{
  printf(" machine precision eps=%e.\n",FLT_EPSILON);
  printf(" error in pi is: %e.\n",M_PI*FLT_EPSILON); 
}
