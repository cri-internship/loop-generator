#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(380, 620, "random");

	for (int c = 1; c < 618; c++)
	  for (int b = 2; b < 375; b++)
	    for (int a = 2; a < 375; a++)
	    {
	      
	      A[a][b]=A[a+5][b+2]/0.027;
	      
	      A[a][b]=0.314;
	    }

    return 0;
}