#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(950, "zeros");
	float **D = create_two_dim_float(50, 50, "zeros");
	float *A = create_one_dim_float(310, "zeros");
	float **C = create_two_dim_float(10, 650, "zeros");

	for (int b = 4; b < 50; b++)
	  for (int a = 4; a < 8; a++)
	  {
	    
	     A[a]=C[a][b]/B[a]-D[a][b];
	     C[a][b]=A[a]-B[a];
	    
	     C[a][b]=0.237;
	    
	     D[a][b]=A[a]-A[a];
	     D[a-1][b-2]=C[a][b];
	    
	     A[a]=C[a][b]*B[a]/D[a][b]-A[a];
	     B[a]=C[a+2][b]*B[a]-D[a][b]+A[a];
	    
	     float var_a=B[a]+0.975;
	     float var_b=B[a-3]+0.842;
	    
	     float var_c=A[a]/0.409;
	     float var_d=A[a+3]/0.642;
	  }

    return 0;
}