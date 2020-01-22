#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(560, "ones");
	double **A = create_two_dim_double(260, 10, "ones");

	for (int b = 0; b < 7; b++)
	  for (int a = 5; a < 257; a++)
	  {
	    
	     B[a]=B[a-5]-A[a][b];
	    
	     B[a]=B[a-3]*0.265;
	    
	     A[a][b]=0.122;
	     A[a+1][b+3]=0.151;
	    
	     A[a][b]=B[a];
	    
	     A[a][b]=B[a]-0.254;
	     B[a]=B[a+1]/0.679;
	  }

    return 0;
}