#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(990, "random");
	float **D = create_two_dim_float(230, 510, "random");
	float **B = create_two_dim_float(90, 960, "random");
	float *C = create_one_dim_float(820, "random");

	for (int c = 3; c < 507; c++)
	  for (int b = 4; b < 85; b++)
	    for (int a = 4; a < 85; a++)
	    {
	      
	      A[a]=A[a-3]-B[a][b]+C[a];
	      
	      B[a][b]=B[a-4][b-3]-0.855;
	      
	      B[a][b]=B[a+5][b+4]-D[a][b]*A[a]+C[a];
	      
	      D[a][b]=0.706;
	      D[a][b+3]=0.215;
	      
	      C[a]=0.682+D[a][b]-A[a];
	      C[a+4]=0.7+B[a][b];
	    }

    return 0;
}