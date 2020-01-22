#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(940, 550, "random");
	double **A = create_two_dim_double(260, 80, "random");

	for (int d = 3; d < 78; d++)
	  for (int c = 5; c < 256; c++)
	    for (int b = 5; b < 256; b++)
	      for (int a = 5; a < 256; a++)
	      {
	        
	       B[a][b]=0.189;
	       B[a-4][b-3]=0.285;
	        
	       B[a][b]=0.539;
	        
	       A[a][b]=0.204;
	       A[a+1][b+2]=0.279;
	        
	       double var_a=A[a][b]/0.478;
	       double var_b=A[a+4][b+1]/0.528;
	        
	       B[a][b]=B[a][b]/A[a][b];
	       A[a][b]=B[a-5][b-1]*A[a][b];
	      }

    return 0;
}