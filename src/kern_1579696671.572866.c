#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(790, 810, 700, "zeros");
	double *A = create_one_dim_double(940, "zeros");
	double **E = create_two_dim_double(360, 90, "zeros");
	double *C = create_one_dim_double(610, "zeros");
	double *B = create_one_dim_double(770, "zeros");

	for (int d = 0; d < 700; d++)
	  for (int c = 2; c < 90; c++)
	    for (int b = 5; b < 360; b++)
	      for (int a = 5; a < 360; a++)
	      {
	        
	       D[a][b][c]=D[a-1][b][c]+0.147;
	        
	       B[a]=B[a-5]*0.203;
	        
	       E[a][b]=E[a-1][b-2]+0.396;
	      }

    return 0;
}