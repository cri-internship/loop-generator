#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(560, 810, 730, "zeros");
	float *C = create_one_dim_float(530, "zeros");
	float **A = create_two_dim_float(510, 80, "zeros");

	for (int d = 3; d < 728; d++)
	  for (int c = 5; c < 75; c++)
	    for (int b = 1; b < 508; b++)
	      for (int a = 1; a < 508; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-5][c-3]-A[a][b];
	        
	       B[a][b][c]=C[a];
	        
	       A[a][b]=B[a][b][c]+0.575;
	       A[a+2][b+5]=B[a][b][c]+C[a];
	      }

    return 0;
}