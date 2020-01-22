#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(270, 890, 290, "zeros");
	float *B = create_one_dim_float(950, "zeros");
	float **C = create_two_dim_float(880, 260, "zeros");
	float **A = create_two_dim_float(80, 190, "zeros");
	float *D = create_one_dim_float(370, "zeros");

	for (int b = 0; b < 370; b++)
	  for (int a = 0; a < 370; a++)
	  {
	    
	     D[a]=0.22;
	     D[a]=0.831;
	  }

    return 0;
}