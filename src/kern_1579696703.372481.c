#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(100, 880, "random");
	float *A = create_one_dim_float(460, "random");

	for (int c = 5; c < 879; c++)
	  for (int b = 5; b < 96; b++)
	    for (int a = 5; a < 96; a++)
	    {
	      
	      B[a][b]=B[a+4][b+1]+A[a];
	      
	      B[a][b]=A[a];
	    }

    return 0;
}