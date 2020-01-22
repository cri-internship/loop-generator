#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(30, "random");
	float *A = create_one_dim_float(200, "random");
	float ***B = create_three_dim_float(10, 200, 200, "random");
	float *C = create_one_dim_float(260, "random");
	float **E = create_two_dim_float(340, 590, "random");

	for (int d = 1; d < 196; d++)
	  for (int c = 2; c < 199; c++)
	    for (int b = 5; b < 5; b++)
	      for (int a = 5; a < 5; a++)
	      {
	        
	       D[a]=D[a-5]*E[a][b]+B[a][b][c]-C[a];
	        
	       E[a][b]=E[a][b+1]-D[a]/0.174*C[a];
	        
	       B[a][b][c]=0.162;
	       B[a+5][b+1][c+4]=0.754;
	        
	       float var_a=B[a][b][c]-0.516;
	       float var_b=B[a-5][b-2][c-1]+0.076;
	      }

    return 0;
}