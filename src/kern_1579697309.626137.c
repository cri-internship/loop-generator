#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(510, "zeros");
	float ***B = create_three_dim_float(810, 420, 440, "zeros");
	float *C = create_one_dim_float(700, "zeros");
	float ***A = create_three_dim_float(780, 340, 650, "zeros");

	for (int d = 0; d < 435; d++)
	  for (int c = 0; c < 416; c++)
	    for (int b = 1; b < 700; b++)
	      for (int a = 1; a < 700; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+3][c+4]-D[a]+A[a][b][c];
	        
	       B[a][b][c]=0.163;
	        
	       C[a]=0.564;
	       C[a-1]=0.267;
	      }

    return 0;
}