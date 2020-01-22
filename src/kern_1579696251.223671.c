#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(640, 200, "ones");

	for (int c = 5; c < 200; c++)
	  for (int b = 0; b < 640; b++)
	    for (int a = 0; a < 640; a++)
	    {
	      
	      A[a][b]=0.612;
	      A[a][b-5]=0.125;
	    }

    return 0;
}