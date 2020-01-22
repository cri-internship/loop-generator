#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(60, "zeros");
	double **A = create_two_dim_double(900, 510, "zeros");

	for (int b = 1; b < 510; b++)
	  for (int a = 4; a < 55; a++)
	  {
	    
	     A[a][b]=A[a-4][b-1]*0.842;
	    
	     B[a]=B[a-1]+0.377;
	    
	     B[a]=B[a+5]+A[a][b];
	  }

    return 0;
}