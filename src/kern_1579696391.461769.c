#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(100, "ones");
	double **A = create_two_dim_double(40, 450, "ones");

	for (int b = 5; b < 446; b++)
	  for (int a = 1; a < 39; a++)
	  {
	    
	     A[a][b]=A[a+1][b+4]+0.472;
	    
	     B[a]=0.265;
	     B[a]=0.549;
	    
	     A[a][b]=0.145;
	  }

    return 0;
}