#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(520, "ones");
	double **A = create_two_dim_double(810, 110, "ones");
	double *C = create_one_dim_double(310, "ones");
	double *D = create_one_dim_double(900, "ones");

	for (int b = 5; b < 309; b++)
	  for (int a = 5; a < 309; a++)
	  {
	    
	     C[a]=C[a+1]-B[a];
	    
	     C[a]=0.182;
	  }

    return 0;
}