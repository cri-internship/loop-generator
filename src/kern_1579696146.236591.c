#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(630, "ones");
	float *A = create_one_dim_float(20, "ones");
	float **D = create_two_dim_float(850, 360, "ones");
	float ***B = create_three_dim_float(300, 890, 550, "ones");
	float *E = create_one_dim_float(50, "ones");

	for (int d = 0; d < 550; d++)
	  for (int c = 4; c < 890; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-4][c]/0.774;
	        
	       E[a]=E[a-1]*0.128+A[a];
	        
	       C[a]=0.436;
	       C[a-1]=0.252;
	        
	       E[a]=0.887;
	        
	       C[a]=0.788;
	      }

    return 0;
}