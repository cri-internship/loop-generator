#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(610, "random");
	double **B = create_two_dim_double(470, 830, "random");

	for (int c = 1; c < 830; c++)
	  for (int b = 0; b < 468; b++)
	    for (int a = 0; a < 468; a++)
	    {
	      
	      B[a][b]=B[a][b-1]-A[a];
	      
	      B[a][b]=B[a+2][b]+0.507;
	      
	      A[a]=A[a]-0.343;
	      A[a]=B[a][b];
	    }

    return 0;
}