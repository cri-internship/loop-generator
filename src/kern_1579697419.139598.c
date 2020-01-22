#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(180, 230, "ones");
	double **B = create_two_dim_double(810, 130, "ones");
	double **C = create_two_dim_double(860, 560, "ones");

	for (int d = 0; d < 130; d++)
	  for (int c = 0; c < 175; c++)
	    for (int b = 0; b < 175; b++)
	      for (int a = 0; a < 175; a++)
	      {
	        
	       B[a][b]=C[a][b];
	       B[a+4][b]=A[a][b]/C[a][b];
	        
	       C[a][b]=A[a][b]+B[a][b]-B[a][b];
	       A[a][b]=A[a+5][b]*0.427;
	      }

    return 0;
}