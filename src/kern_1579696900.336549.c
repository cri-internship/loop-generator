#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(280, 550, "zeros");
	double *A = create_one_dim_double(970, "zeros");

	for (int b = 2; b < 545; b++)
	  for (int a = 5; a < 275; a++)
	  {
	    
	     A[a]=A[a+4]+B[a][b];
	    
	     B[a][b]=A[a];
	     B[a-5][b-2]=0.683;
	    
	     A[a]=0.523;
	    
	     B[a][b]=A[a];
	    
	     double var_a=A[a]+0.146;
	  }

    return 0;
}