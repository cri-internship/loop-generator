#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(610, 470, 760, "ones");
	float *B = create_one_dim_float(290, "ones");

	for (int d = 0; d < 758; d++)
	  for (int c = 0; c < 469; c++)
	    for (int b = 1; b < 290; b++)
	      for (int a = 1; a < 290; a++)
	      {
	        
	       B[a]=B[a-1]+A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+1][c+2]+B[a];
	      }

    return 0;
}