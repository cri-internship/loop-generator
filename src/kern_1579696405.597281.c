#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(470, "zeros");
	float *B = create_one_dim_float(880, "zeros");
	float **C = create_two_dim_float(770, 370, "zeros");
	float ***A = create_three_dim_float(980, 280, 660, "zeros");

	for (int d = 4; d < 366; d++)
	  for (int c = 3; c < 768; c++)
	    for (int b = 3; b < 768; b++)
	      for (int a = 3; a < 768; a++)
	      {
	        
	       C[a][b]=D[a]*B[a]+A[a][b][c];
	       C[a-3][b-4]=B[a]/D[a]+A[a][b][c];
	        
	       float var_a=C[a][b]-0.576;
	       float var_b=C[a][b-3]+0.07;
	        
	       B[a]=C[a][b]/B[a];
	       D[a]=C[a+2][b+4]-D[a]/B[a]+A[a][b][c];
	      }

    return 0;
}