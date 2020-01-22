#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(360, 180, "ones");
	double **A = create_two_dim_double(600, 250, "ones");

	for (int d = 4; d < 176; d++)
	  for (int c = 4; c < 355; c++)
	    for (int b = 4; b < 355; b++)
	      for (int a = 4; a < 355; a++)
	      {
	        
	       A[a][b]=A[a-4][b-4]*B[a][b];
	        
	       A[a][b]=A[a-1][b-1]-0.376;
	        
	       B[a][b]=B[a-3][b-4]*0.087;
	        
	       B[a][b]=B[a+5][b+2]+0.659;
	        
	       B[a][b]=B[a+3][b+1]-0.031;
	        
	       B[a][b]=B[a][b]-0.838;
	       A[a][b]=B[a+5][b+4]+A[a][b];
	        
	       A[a][b]=B[a][b]/A[a][b];
	       B[a][b]=B[a-2][b]+A[a][b];
	      }

    return 0;
}