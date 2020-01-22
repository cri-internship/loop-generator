#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(100, 840, "ones");
	float *C = create_one_dim_float(420, "ones");
	float ***B = create_three_dim_float(380, 300, 700, "ones");

	for (int d = 5; d < 700; d++)
	  for (int c = 2; c < 300; c++)
	    for (int b = 5; b < 97; b++)
	      for (int a = 5; a < 97; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b][c-5]/0.642;
	        
	       A[a][b]=B[a][b][c]/C[a];
	       A[a-5][b-2]=B[a][b][c]/C[a];
	        
	       A[a][b]=0.257;
	        
	       C[a]=0.478;
	       C[a-2]=0.176;
	      }

    return 0;
}