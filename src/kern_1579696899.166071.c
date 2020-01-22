#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(220, 90, 650, "ones");
	float *C = create_one_dim_float(600, "ones");
	float **D = create_two_dim_float(670, 250, "ones");
	float ***E = create_three_dim_float(760, 230, 680, "ones");
	float **B = create_two_dim_float(530, 810, "ones");

	for (int d = 3; d < 250; d++)
	  for (int c = 3; c < 527; c++)
	    for (int b = 3; b < 527; b++)
	      for (int a = 3; a < 527; a++)
	      {
	        
	       B[a][b]=B[a-3][b-3]-0.885;
	        
	       D[a][b]=D[a][b-1]-0.63;
	        
	       B[a][b]=B[a+3][b+4]*0.861;
	        
	       E[a][b][c]=D[a][b]-B[a][b];
	       D[a][b]=D[a-3][b-2]-E[a][b][c]/A[a][b][c];
	      }

    return 0;
}