#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(410, 940, "ones");
	double *B = create_one_dim_double(900, "ones");

	for (int c = 0; c < 939; c++)
	  for (int b = 0; b < 408; b++)
	    for (int a = 0; a < 408; a++)
	    {
	      
	      A[a][b]=0.972;
	      A[a+2][b+1]=0.547;
	      
	      B[a]=B[a]-A[a][b];
	      A[a][b]=B[a+3]/A[a][b];
	    }

    return 0;
}