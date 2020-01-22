#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(760, 600, "ones");
	float *B = create_one_dim_float(570, "ones");
	float *A = create_one_dim_float(120, "ones");
	float *D = create_one_dim_float(600, "ones");

	for (int b = 0; b < 115; b++)
	  for (int a = 0; a < 115; a++)
	  {
	    
	     B[a]=A[a]+0.26;
	     A[a]=A[a+5]*B[a]/D[a]+D[a];
	  }

    return 0;
}