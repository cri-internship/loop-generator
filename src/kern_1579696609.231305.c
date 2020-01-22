#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(370, 710, "zeros");
	float **A = create_two_dim_float(100, 400, "zeros");
	float *B = create_one_dim_float(1000, "zeros");
	float *C = create_one_dim_float(740, "zeros");
	float *E = create_one_dim_float(390, "zeros");

	for (int c = 0; c < 399; c++)
	  for (int b = 5; b < 98; b++)
	    for (int a = 5; a < 98; a++)
	    {
	      
	      B[a]=B[a-5]+0.833;
	      
	      B[a]=B[a-4]+0.681;
	      
	      D[a][b]=D[a+1][b+5]-0.052;
	      
	      C[a]=D[a][b]/0.444;
	      C[a-5]=A[a][b];
	      
	      C[a]=A[a][b]*C[a]/B[a];
	      A[a][b]=A[a+2][b+1]-D[a][b]*E[a]/0.193;
	      
	      float var_a=D[a][b]-0.934;
	      float var_b=D[a][b+2]+0.338;
	    }

    return 0;
}