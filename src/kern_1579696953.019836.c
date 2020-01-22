#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(690, 40, 730, "zeros");
	float **C = create_two_dim_float(480, 810, "zeros");
	float **A = create_two_dim_float(430, 700, "zeros");

	for (int d = 0; d < 726; d++)
	  for (int c = 0; c < 38; c++)
	    for (int b = 0; b < 425; b++)
	      for (int a = 0; a < 425; a++)
	      {
	        
	       A[a][b]=A[a+3][b+4]-0.111;
	        
	       C[a][b]=C[a][b+4]+B[a][b][c];
	        
	       B[a][b][c]=B[a+4][b+2][c+4]*A[a][b]-C[a][b];
	        
	       C[a][b]=C[a+5][b+2]-B[a][b][c]/A[a][b];
	        
	       A[a][b]=0.019;
	      }

    return 0;
}