#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(890, 360, "zeros");
	double **A = create_two_dim_double(120, 940, "zeros");
	double *B = create_one_dim_double(810, "zeros");

	for (int b = 0; b < 360; b++)
	  for (int a = 4; a < 890; a++)
	  {
	    
	     C[a][b]=B[a]+A[a][b];
	     C[a-4][b]=0.748;
	  }

    return 0;
}