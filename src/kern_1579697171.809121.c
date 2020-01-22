#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(30, "zeros");
	float **C = create_two_dim_float(740, 100, "zeros");
	float *A = create_one_dim_float(680, "zeros");
	float *B = create_one_dim_float(20, "zeros");

	for (int b = 5; b < 20; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     B[a]=B[a-3]+0.43;
	    
	     A[a]=A[a+4]/0.285;
	    
	     B[a]=0.669;
	    
	     D[a]=C[a][b]+B[a];
	     D[a-5]=A[a]+0.156*C[a][b];
	    
	     float var_b=A[a]+0.15;
	    
	     D[a]=B[a]-D[a]/A[a]+C[a][b];
	     B[a]=B[a-5]-0.09+D[a];
	  }

    return 0;
}