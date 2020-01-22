#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(700, 580, 980, "zeros");
	float *D = create_one_dim_float(380, "zeros");
	float **E = create_two_dim_float(660, 870, "zeros");
	float *A = create_one_dim_float(420, "zeros");
	float ***C = create_three_dim_float(10, 460, 460, "zeros");

	for (int c = 0; c < 420; c++)
	  for (int b = 0; b < 420; b++)
	    for (int a = 0; a < 420; a++)
	    {
	      
	      float var_a=A[a]-0.204;
	      A[a]=0.706;
	    }

    return 0;
}