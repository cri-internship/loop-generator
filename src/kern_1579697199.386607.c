#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(300, "ones");
	float ***B = create_three_dim_float(610, 10, 440, "ones");
	float *A = create_one_dim_float(430, "ones");

	for (int c = 5; c < 438; c++)
	  for (int b = 2; b < 6; b++)
	    for (int a = 2; a < 295; a++)
	    {
	      
	      A[a]=A[a-2]-B[a][b][c];
	      
	      B[a][b][c]=B[a-1][b-2][c-5]-0.161;
	      
	      C[a]=C[a-2]-A[a]*B[a][b][c];
	      
	      B[a][b][c]=B[a][b+4][c+2]-C[a]*C[a];
	      
	      A[a]=C[a];
	      
	      float var_a=C[a]/0.057;
	      float var_b=C[a+5]/0.912;
	      
	      B[a][b][c]=B[a][b][c]-0.11;
	      C[a]=B[a+2][b+1][c+1]*C[a]/A[a];
	    }

    return 0;
}