#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(150, "ones");
	float ***A = create_three_dim_float(600, 350, 440, "ones");

	for (int d = 1; d < 436; d++)
	  for (int c = 2; c < 345; c++)
	    for (int b = 1; b < 148; b++)
	      for (int a = 1; a < 148; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-2][c-1]/0.605;
	        
	       A[a][b][c]=A[a+2][b+5][c+4]+B[a];
	        
	       A[a][b][c]=A[a+2][b+2][c+1]-0.154;
	        
	       B[a]=0.461;
	       B[a+2]=0.992;
	      }

    return 0;
}