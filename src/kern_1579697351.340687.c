#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(940, "zeros");
	double **B = create_two_dim_double(420, 350, "zeros");

	for (int c = 4; c < 350; c++)
	  for (int b = 1; b < 420; b++)
	    for (int a = 1; a < 420; a++)
	    {
	      
	      A[a]=0.748;
	      A[a-1]=0.843;
	      
	      A[a]=B[a][b]*A[a];
	      B[a][b]=B[a][b-4]/0.334;
	    }

    return 0;
}