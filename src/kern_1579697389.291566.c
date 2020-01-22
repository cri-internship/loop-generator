#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(460, 100, "ones");
	float **A = create_two_dim_float(550, 610, "ones");

	for (int c = 3; c < 607; c++)
	  for (int b = 0; b < 545; b++)
	    for (int a = 0; a < 545; a++)
	    {
	      
	      A[a][b]=A[a+5][b+3]+B[a][b];
	      
	      A[a][b]=0.828;
	    }

    return 0;
}