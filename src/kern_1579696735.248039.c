#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(940, 30, 870, "ones");
	float **A = create_two_dim_float(50, 980, "ones");
	float *C = create_one_dim_float(810, "ones");
	float *B = create_one_dim_float(180, "ones");

	for (int d = 0; d < 870; d++)
	  for (int c = 0; c < 30; c++)
	    for (int b = 3; b < 50; b++)
	      for (int a = 3; a < 50; a++)
	      {
	        
	       A[a][b]=A[a][b+4]+0.591;
	        
	       D[a][b][c]=B[a]*0.519/C[a];
	       D[a+3][b][c]=C[a]/A[a][b]+B[a];
	        
	       C[a]=0.676;
	       C[a+3]=0.5;
	        
	       D[a][b][c]=C[a]+D[a][b][c]*0.377;
	       B[a]=C[a-3]-D[a][b][c]/B[a];
	      }

    return 0;
}