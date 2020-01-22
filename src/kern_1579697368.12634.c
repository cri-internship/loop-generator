#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(890, 840, "ones");
	double *A = create_one_dim_double(70, "ones");

	for (int b = 5; b < 837; b++)
	  for (int a = 3; a < 67; a++)
	  {
	    
	     B[a][b]=B[a-3][b-5]/0.344;
	    
	     A[a]=A[a+3]-0.205;
	    
	     B[a][b]=B[a+1][b+1]*A[a];
	  }

    return 0;
}