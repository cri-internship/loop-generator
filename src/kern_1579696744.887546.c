#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(470, 980, "ones");
	float ***A = create_three_dim_float(270, 210, 250, "ones");
	float **D = create_two_dim_float(20, 70, "ones");
	float *E = create_one_dim_float(890, "ones");
	float **C = create_two_dim_float(450, 660, "ones");

	for (int d = 2; d < 69; d++)
	  for (int c = 5; c < 16; c++)
	    for (int b = 5; b < 16; b++)
	      for (int a = 5; a < 16; a++)
	      {
	        
	       E[a]=E[a-3]-0.812;
	        
	       E[a]=B[a][b]+A[a][b][c]*E[a]/D[a][b]-C[a][b];
	       B[a][b]=C[a][b]+0.055;
	        
	       D[a][b]=D[a+4][b+1]+0.412;
	        
	       C[a][b]=0.986;
	       C[a+4][b+3]=0.392;
	        
	       C[a][b]=C[a][b]-B[a][b]/D[a][b];
	       A[a][b][c]=C[a][b-2]+B[a][b]-D[a][b]*E[a]/A[a][b][c];
	        
	       B[a][b]=C[a][b]-E[a]/B[a][b];
	       D[a][b]=C[a-5][b]+E[a];
	      }

    return 0;
}