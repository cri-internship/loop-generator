#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(30, 470, "ones");
	double **B = create_two_dim_double(550, 120, "ones");
	double **C = create_two_dim_double(50, 60, "ones");

	for (int d = 5; d < 60; d++)
	  for (int c = 1; c < 27; c++)
	    for (int b = 1; b < 27; b++)
	      for (int a = 1; a < 27; a++)
	      {
	        
	       A[a][b]=B[a][b]-C[a][b];
	       A[a+3][b+2]=B[a][b]+C[a][b];
	        
	       C[a][b]=C[a][b]/A[a][b];
	       B[a][b]=C[a-1][b-5]*B[a][b];
	      }

    return 0;
}