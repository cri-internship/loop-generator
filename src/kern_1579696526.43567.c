#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(50, "zeros");
	float *C = create_one_dim_float(670, "zeros");
	float **D = create_two_dim_float(180, 790, "zeros");
	float **E = create_two_dim_float(680, 990, "zeros");
	float **A = create_two_dim_float(630, 200, "zeros");

	for (int c = 0; c < 197; c++)
	  for (int b = 0; b < 630; b++)
	    for (int a = 0; a < 630; a++)
	    {
	      
	      A[a][b]=A[a][b+3]*E[a][b]+D[a][b]/B[a]-C[a];
	      
	      float var_a=E[a][b]*0.562;
	      float var_b=E[a][b+1]-0.159;
	    }

    return 0;
}