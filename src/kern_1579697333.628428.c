#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(130, "random");
	float **C = create_two_dim_float(360, 820, "random");
	float **A = create_two_dim_float(950, 330, "random");
	float *B = create_one_dim_float(990, "random");

	for (int c = 0; c < 328; c++)
	  for (int b = 0; b < 949; b++)
	    for (int a = 0; a < 949; a++)
	    {
	      
	      A[a][b]=0.76;
	      A[a+1][b+2]=0.342;
	    }

    return 0;
}