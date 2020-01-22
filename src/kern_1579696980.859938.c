#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(430, 180, "ones");
	double *A = create_one_dim_double(610, "ones");
	double **B = create_two_dim_double(390, 360, "ones");

	for (int b = 5; b < 610; b++)
	  for (int a = 5; a < 610; a++)
	  {
	    
	     A[a]=A[a-5]*C[a][b];
	    
	     A[a]=A[a]*B[a][b];
	     C[a][b]=A[a-2]/B[a][b];
	  }

    return 0;
}