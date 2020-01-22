#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(610, "zeros");
	double *D = create_one_dim_double(770, "zeros");
	double **B = create_two_dim_double(720, 590, "zeros");
	double *C = create_one_dim_double(990, "zeros");

	for (int c = 5; c < 590; c++)
	  for (int b = 4; b < 605; b++)
	    for (int a = 4; a < 605; a++)
	    {
	      
	      B[a][b]=B[a-4][b-5]-0.263;
	      
	      A[a]=A[a+5]+0.523;
	      
	      C[a]=C[a+5]/0.707;
	      
	      B[a][b]=C[a];
	      
	      D[a]=0.522;
	      D[a-4]=0.715;
	      
	      D[a]=B[a][b];
	    }

    return 0;
}