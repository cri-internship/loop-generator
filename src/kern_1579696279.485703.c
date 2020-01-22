#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(500, 350, "ones");
	double *C = create_one_dim_double(820, "ones");
	double **D = create_two_dim_double(240, 860, "ones");
	double *B = create_one_dim_double(90, "ones");

	for (int c = 2; c < 350; c++)
	  for (int b = 3; b < 500; b++)
	    for (int a = 3; a < 500; a++)
	    {
	      
	      A[a][b]=A[a-3][b-1]-0.981;
	      
	      C[a]=C[a-2]/0.022;
	      
	      C[a]=C[a-3]-D[a][b];
	      
	      A[a][b]=0.639;
	    }

    return 0;
}