#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(190, "ones");
	float **B = create_two_dim_float(370, 700, "ones");
	float **C = create_two_dim_float(800, 390, "ones");

	for (int c = 4; c < 386; c++)
	  for (int b = 4; b < 190; b++)
	    for (int a = 4; a < 190; a++)
	    {
	      
	      B[a][b]=B[a-3][b-4]*C[a][b]-A[a];
	      
	      A[a]=A[a-2]-0.907;
	      
	      B[a][b]=B[a][b-1]-C[a][b];
	      
	      B[a][b]=B[a-3][b]+0.139;
	      
	      C[a][b]=C[a+1][b+4]/0.189;
	      
	      C[a][b]=B[a][b];
	      
	      A[a]=B[a][b]*A[a];
	      C[a][b]=B[a+5][b+5]/A[a]*C[a][b];
	    }

    return 0;
}