#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(980, "zeros");
	double *D = create_one_dim_double(650, "zeros");
	double **C = create_two_dim_double(560, 340, "zeros");
	double **A = create_two_dim_double(210, 20, "zeros");

	for (int c = 4; c < 20; c++)
	  for (int b = 3; b < 210; b++)
	    for (int a = 3; a < 210; a++)
	    {
	      
	      D[a]=0.65;
	      A[a][b]=D[a]/C[a][b];
	      
	      C[a][b]=C[a][b+5]/0.803;
	      
	      A[a][b]=D[a];
	    }

    return 0;
}