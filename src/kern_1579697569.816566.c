#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(950, "random");
	float ***B = create_three_dim_float(590, 880, 790, "random");
	float *D = create_one_dim_float(120, "random");
	float *C = create_one_dim_float(420, "random");

	for (int b = 0; b < 949; b++)
	  for (int a = 0; a < 949; a++)
	  {
	    
	     A[a]=A[a+1]-C[a];
	  }

    return 0;
}