#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(100, 250, 790, "zeros");
	float *A = create_one_dim_float(20, "zeros");

	for (int d = 0; d < 788; d++)
	  for (int c = 0; c < 245; c++)
	    for (int b = 1; b < 20; b++)
	      for (int a = 1; a < 20; a++)
	      {
	        
	       A[a]=A[a-1]-0.547;
	        
	       B[a][b][c]=B[a+4][b+5][c+2]*0.787;
	      }

    return 0;
}