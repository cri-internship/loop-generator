#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(960, 50, "random");
	float ***B = create_three_dim_float(50, 640, 760, "random");
	float ***C = create_three_dim_float(530, 920, 850, "random");
	float **D = create_two_dim_float(10, 620, "random");
	float *A = create_one_dim_float(10, "random");

	for (int d = 0; d < 757; d++)
	  for (int c = 0; c < 635; c++)
	    for (int b = 1; b < 10; b++)
	      for (int a = 1; a < 10; a++)
	      {
	        
	       A[a]=A[a-1]/0.524;
	        
	       float var_a=B[a][b][c]-0.075;
	       float var_b=B[a+1][b+5][c+3]/0.699;
	        
	       A[a]=C[a][b][c]*E[a][b]-D[a][b]/A[a];
	       D[a][b]=C[a+2][b+5][c+2]*B[a][b][c];
	      }

    return 0;
}