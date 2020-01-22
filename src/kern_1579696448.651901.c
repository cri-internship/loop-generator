#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(310, "ones");
	float ***A = create_three_dim_float(470, 910, 420, "ones");

	for (int d = 0; d < 416; d++)
	  for (int c = 0; c < 909; c++)
	    for (int b = 1; b < 308; b++)
	      for (int a = 1; a < 308; a++)
	      {
	        
	       B[a]=B[a-1]-0.673;
	        
	       B[a]=B[a+2]/A[a][b][c];
	        
	       A[a][b][c]=0.486;
	       A[a+5][b+1][c+4]=0.917;
	      }

    return 0;
}