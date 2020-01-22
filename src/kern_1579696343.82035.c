#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(970, 280, "zeros");
	float **A = create_two_dim_float(140, 900, "zeros");
	float *B = create_one_dim_float(690, "zeros");
	float *D = create_one_dim_float(420, "zeros");

	for (int d = 1; d < 279; d++)
	  for (int c = 3; c < 140; c++)
	    for (int b = 3; b < 140; b++)
	      for (int a = 3; a < 140; a++)
	      {
	        
	       C[a][b]=C[a-2][b-1]+0.699;
	        
	       C[a][b]=C[a+3][b+1]*0.651;
	        
	       A[a][b]=0.819;
	       A[a-3][b-1]=0.78;
	        
	       A[a][b]=0.179;
	        
	       B[a]=0.488+D[a]*C[a][b];
	       B[a+3]=0.551+A[a][b];
	      }

    return 0;
}