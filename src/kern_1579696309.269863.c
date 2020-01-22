#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(410, 630, "ones");
	float **C = create_two_dim_float(60, 700, "ones");
	float **D = create_two_dim_float(150, 160, "ones");
	float *A = create_one_dim_float(990, "ones");

	for (int d = 3; d < 158; d++)
	  for (int c = 5; c < 60; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       C[a][b]=C[a-5][b-3]-B[a][b]+A[a];
	        
	       B[a][b]=B[a+4][b+2]+0.219;
	        
	       D[a][b]=0.013-A[a]+C[a][b];
	       D[a+1][b+2]=A[a]*B[a][b]+C[a][b];
	        
	       A[a]=0.085;
	       A[a+3]=0.151;
	        
	       D[a][b]=B[a][b]*0.016/D[a][b];
	       B[a][b]=B[a+2][b+2]+D[a][b]-C[a][b];
	        
	       C[a][b]=D[a][b]+B[a][b];
	       A[a]=D[a+2][b+1]*B[a][b];
	      }

    return 0;
}