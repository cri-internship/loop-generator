#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(410, 920, "ones");
	double *B = create_one_dim_double(410, "ones");

	for (int b = 2; b < 920; b++)
	  for (int a = 2; a < 405; a++)
	  {
	    
	     B[a]=0.749;
	     B[a+5]=A[a][b];
	    
	     B[a]=A[a][b]-0.199;
	     A[a][b]=A[a-2][b-2]*B[a];
	  }

    return 0;
}