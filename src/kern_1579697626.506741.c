#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(640, 820, 30, "zeros");
	float **D = create_two_dim_float(350, 20, "zeros");
	float *C = create_one_dim_float(500, "zeros");
	float **A = create_two_dim_float(380, 410, "zeros");

	for (int d = 0; d < 26; d++)
	  for (int c = 4; c < 19; c++)
	    for (int b = 4; b < 345; b++)
	      for (int a = 4; a < 345; a++)
	      {
	        
	       B[a][b][c]=B[a+3][b+1][c+4]+0.303;
	        
	       D[a][b]=0.643;
	       D[a+5][b+1]=0.792;
	        
	       A[a][b]=0.023;
	       A[a-3][b-4]=0.313;
	        
	       D[a][b]=D[a][b]-C[a]/B[a][b][c]+A[a][b];
	       B[a][b][c]=D[a-4][b-2]+C[a]*A[a][b];
	      }

    return 0;
}