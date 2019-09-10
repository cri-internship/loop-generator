#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(50, 50, 50, "ones");
	float *A = create_one_dim_float(100, "ones");
	float **B = create_two_dim_float(50, 50, "ones");

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 0; a < 50; a++)
	    {
	      
	       
	       C[a][b][c]=B[a][b]-A[a]
	       
	       B[a][b]=C[a][b][c]*A[a];
	      
	       
	       A[a]=C[a][b][c]/0.47836-A[a]
	       
	       C[a][b][c]=A[a];
	      ;
	      ;
	    }

    return 0;
}