#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(340, "zeros");
	double **A = create_two_dim_double(580, 570, "zeros");
	double *B = create_one_dim_double(330, "zeros");

	for (int c = 0; c < 566; c++)
	  for (int b = 5; b < 328; b++)
	    for (int a = 5; a < 328; a++)
	    {
	      
	      C[a]=C[a-1]+0.48;
	      
	      B[a]=B[a+2]+A[a][b];
	      
	      B[a]=C[a];
	      
	      B[a]=A[a][b]*C[a]+B[a];
	      A[a][b]=A[a+5][b+4]+0.32*B[a];
	      
	      double var_a=C[a]/0.272;
	      double var_b=C[a-5]/0.661;
	    }

    return 0;
}