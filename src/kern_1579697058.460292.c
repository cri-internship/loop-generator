#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(160, 80, 190, "ones");
	float ***C = create_three_dim_float(280, 420, 210, "ones");
	float ***B = create_three_dim_float(910, 690, 330, "ones");
	float *A = create_one_dim_float(290, "ones");

	for (int c = 0; c < 287; c++)
	  for (int b = 0; b < 287; b++)
	    for (int a = 0; a < 287; a++)
	    {
	      
	      A[a]=0.35;
	      A[a+3]=0.456;
	    }

    return 0;
}