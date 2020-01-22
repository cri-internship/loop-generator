#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(680, 20, "random");
	float *B = create_one_dim_float(960, "random");
	float **A = create_two_dim_float(70, 660, "random");
	float **C = create_two_dim_float(90, 560, "random");
	float *E = create_one_dim_float(420, "random");

	for (int d = 4; d < 15; d++)
	  for (int c = 5; c < 70; c++)
	    for (int b = 5; b < 70; b++)
	      for (int a = 5; a < 70; a++)
	      {
	        
	       C[a][b]=C[a-5][b-4]/0.838;
	        
	       A[a][b]=A[a-5][b-1]*0.082;
	        
	       D[a][b]=D[a+1][b+5]/0.432;
	        
	       C[a][b]=C[a+3][b+5]/0.953;
	        
	       float var_a=E[a]/0.967;
	       float var_b=E[a+5]/0.05;
	        
	       D[a][b]=D[a][b]-E[a]/C[a][b]+B[a]*A[a][b];
	       A[a][b]=D[a+5][b]+0.195*C[a][b];
	      }

    return 0;
}