#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(420, "ones");
	double *A = create_one_dim_double(70, "ones");
	double **C = create_two_dim_double(730, 30, "ones");
	double *D = create_one_dim_double(870, "ones");

	for (int b = 0; b < 28; b++)
	  for (int a = 1; a < 65; a++)
	  {
	    
	     D[a]=D[a-1]/0.804;
	    
	     D[a]=D[a+1]+A[a]*B[a]-C[a][b];
	    
	     C[a][b]=C[a+2][b+2]*D[a]+A[a]-D[a];
	    
	     A[a]=A[a+5]-0.176;
	  }

    return 0;
}