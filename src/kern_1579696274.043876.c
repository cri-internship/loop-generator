#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(830, 900, "zeros");

	for (int c = 0; c < 895; c++)
	  for (int b = 0; b < 826; b++)
	    for (int a = 0; a < 826; a++)
	    {
	      
	      A[a][b]=A[a+4][b+5]/0.253;
	    }

    return 0;
}