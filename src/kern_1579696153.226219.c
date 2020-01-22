#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(960, 660, "zeros");
	double **B = create_two_dim_double(230, 20, "zeros");

	for (int d = 1; d < 16; d++)
	  for (int c = 3; c < 228; c++)
	    for (int b = 3; b < 228; b++)
	      for (int a = 3; a < 228; a++)
	      {
	        
	       A[a][b]=A[a][b-1]/0.783;
	        
	       B[a][b]=B[a-3][b]*A[a][b];
	        
	       B[a][b]=B[a+1][b+2]/A[a][b];
	        
	       A[a][b]=A[a+3][b+4]-0.525;
	        
	       B[a][b]=B[a+2][b+4]-0.379;
	        
	       A[a][b]=B[a][b]-A[a][b];
	       B[a][b]=B[a+1][b+4]-A[a][b];
	      }

    return 0;
}