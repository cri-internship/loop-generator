#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(540, 570, "zeros");
	double **B = create_two_dim_double(100, 1000, "zeros");

	for (int d = 5; d < 570; d++)
	  for (int c = 0; c < 95; c++)
	    for (int b = 0; b < 95; b++)
	      for (int a = 0; a < 95; a++)
	      {
	        
	       B[a][b]=B[a][b+1]/A[a][b];
	        
	       A[a][b]=A[a+5][b]*B[a][b];
	        
	       B[a][b]=B[a+5][b+2]/0.008;
	        
	       A[a][b]=B[a][b];
	        
	       A[a][b]=B[a][b]+A[a][b];
	       B[a][b]=B[a+1][b]*0.889;
	      }

    return 0;
}