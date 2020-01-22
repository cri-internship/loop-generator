#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(900, "random");
	float **B = create_two_dim_float(370, 80, "random");
	float **C = create_two_dim_float(190, 80, "random");

	for (int b = 5; b < 78; b++)
	  for (int a = 5; a < 187; a++)
	  {
	    
	     B[a][b]=B[a-5][b-3]-0.688;
	    
	     A[a]=A[a]-B[a][b]*C[a][b];
	     A[a]=B[a][b]+C[a][b];
	    
	     A[a]=A[a+1]/B[a][b]+C[a][b];
	    
	     B[a][b]=A[a]+C[a][b];
	    
	     float var_a=B[a][b]/0.409;
	     float var_b=B[a-2][b-5]/0.921;
	    
	     B[a][b]=C[a][b]/A[a];
	     C[a][b]=C[a+3][b+2]*B[a][b]-A[a];
	  }

    return 0;
}