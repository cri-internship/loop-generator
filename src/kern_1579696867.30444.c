#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(610, 410, "zeros");
	float **C = create_two_dim_float(180, 950, "zeros");
	float *B = create_one_dim_float(110, "zeros");
	float ***A = create_three_dim_float(810, 790, 960, "zeros");

	for (int d = 4; d < 960; d++)
	  for (int c = 5; c < 790; c++)
	    for (int b = 1; b < 180; b++)
	      for (int a = 1; a < 180; a++)
	      {
	        
	       A[a][b][c]=A[a][b-5][c-4]/C[a][b];
	        
	       C[a][b]=0.588;
	       C[a-1][b]=0.037;
	      }

    return 0;
}