#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(730, "ones");
	float *A = create_one_dim_float(960, "ones");
	float ***D = create_three_dim_float(420, 270, 80, "ones");
	float *B = create_one_dim_float(550, "ones");

	for (int d = 4; d < 548; d++)
	  for (int c = 4; c < 548; c++)
	    for (int b = 4; b < 548; b++)
	      for (int a = 4; a < 548; a++)
	      {
	        
	       A[a]=A[a+2]/0.804;
	        
	       B[a]=B[a+2]*0.469;
	        
	       B[a]=D[a][b][c]/A[a];
	        
	       A[a]=C[a]/B[a]-0.507;
	       B[a]=C[a-3]+D[a][b][c];
	      }

    return 0;
}