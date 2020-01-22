#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(670, 320, "zeros");
	double **A = create_two_dim_double(180, 750, "zeros");
	double *D = create_one_dim_double(450, "zeros");
	double *B = create_one_dim_double(820, "zeros");

	for (int b = 2; b < 749; b++)
	  for (int a = 5; a < 175; a++)
	  {
	    
	     A[a][b]=A[a+5][b+1]+0.27;
	    
	     A[a][b]=B[a]-D[a]+C[a][b];
	    
	     C[a][b]=D[a]+A[a][b];
	  }

    return 0;
}