#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(250, 950, 130, "random");
	double **B = create_two_dim_double(120, 790, "random");

	for (int d = 3; d < 128; d++)
	  for (int c = 5; c < 786; c++)
	    for (int b = 3; b < 117; b++)
	      for (int a = 3; a < 117; a++)
	      {
	        
	       B[a][b]=B[a-3][b-5]-0.723;
	        
	       A[a][b][c]=A[a-3][b-3][c-3]-B[a][b];
	        
	       B[a][b]=B[a+3][b+4]-0.101;
	        
	       A[a][b][c]=A[a][b+3][c+2]-0.024;
	      }

    return 0;
}