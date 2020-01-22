#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(730, "zeros");
	float *D = create_one_dim_float(420, "zeros");
	float ***B = create_three_dim_float(390, 390, 170, "zeros");
	float **C = create_two_dim_float(880, 730, "zeros");

	for (int d = 5; d < 169; d++)
	  for (int c = 5; c < 385; c++)
	    for (int b = 5; b < 385; b++)
	      for (int a = 5; a < 385; a++)
	      {
	        
	       D[a]=D[a+3]+0.109;
	        
	       B[a][b][c]=0.812;
	       B[a+5][b+5][c+1]=0.969;
	        
	       B[a][b][c]=C[a][b];
	        
	       A[a]=0.749;
	       A[a-3]=0.476;
	      }

    return 0;
}