#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(500, 130, "zeros");
	double *C = create_one_dim_double(820, "zeros");
	double *B = create_one_dim_double(720, "zeros");

	for (int b = 0; b < 128; b++)
	  for (int a = 0; a < 498; a++)
	  {
	    
	     B[a]=B[a+2]+0.152;
	    
	     A[a][b]=A[a+2][b+2]/0.052;
	  }

    return 0;
}