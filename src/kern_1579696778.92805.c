#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(250, 60, 350, "zeros");
	float **B = create_two_dim_float(940, 810, "zeros");
	float *D = create_one_dim_float(30, "zeros");
	float **A = create_two_dim_float(350, 800, "zeros");

	for (int d = 0; d < 796; d++)
	  for (int c = 0; c < 349; c++)
	    for (int b = 0; b < 349; b++)
	      for (int a = 0; a < 349; a++)
	      {
	        
	       A[a][b]=0.154;
	       A[a+1][b+4]=0.302;
	      }

    return 0;
}