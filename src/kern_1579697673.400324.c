#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(940, "ones");
	float **D = create_two_dim_float(1000, 90, "ones");
	float **A = create_two_dim_float(360, 700, "ones");
	float *E = create_one_dim_float(10, "ones");
	float ***C = create_three_dim_float(910, 50, 960, "ones");

	for (int d = 0; d < 90; d++)
	  for (int c = 2; c < 6; c++)
	    for (int b = 2; b < 6; b++)
	      for (int a = 2; a < 6; a++)
	      {
	        
	       E[a]=E[a+4]/B[a];
	        
	       float var_a=D[a][b]*0.502;
	       D[a][b]=0.853;
	        
	       E[a]=E[a+2]*C[a][b][c]+D[a][b]/A[a][b];
	        
	       E[a]=E[a+3]/C[a][b][c]*A[a][b]+B[a];
	        
	       E[a]=B[a]+E[a];
	       B[a]=B[a-2]-A[a][b]+D[a][b]*C[a][b][c];
	      }

    return 0;
}