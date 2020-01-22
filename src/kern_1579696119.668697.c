#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(290, "ones");
	float **C = create_two_dim_float(200, 650, "ones");
	float ***B = create_three_dim_float(840, 470, 150, "ones");

	for (int c = 0; c < 145; c++)
	  for (int b = 0; b < 465; b++)
	    for (int a = 0; a < 198; a++)
	    {
	      
	      A[a]=A[a+3]+C[a][b];
	      
	      A[a]=0.975;
	      
	      C[a][b]=C[a+2][b+5]-A[a];
	      
	      float var_b=B[a][b][c]/0.599;
	      float var_c=B[a+3][b+5][c+5]/0.531;
	    }

    return 0;
}