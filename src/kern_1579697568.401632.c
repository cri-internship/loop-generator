#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(210, "zeros");
	double **B = create_two_dim_double(660, 120, "zeros");
	double **A = create_two_dim_double(780, 810, "zeros");
	double **C = create_two_dim_double(250, 870, "zeros");

	for (int b = 0; b < 868; b++)
	  for (int a = 1; a < 206; a++)
	  {
	    
	     D[a]=D[a+4]*B[a][b]+C[a][b]/A[a][b];
	    
	     D[a]=0.171;
	    
	     C[a][b]=D[a];
	     C[a+5][b+2]=A[a][b];
	  }

    return 0;
}