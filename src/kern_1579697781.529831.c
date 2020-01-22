#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(910, 750, "zeros");
	float **A = create_two_dim_float(190, 420, "zeros");
	float *B = create_one_dim_float(900, "zeros");

	for (int d = 1; d < 419; d++)
	  for (int c = 4; c < 185; c++)
	    for (int b = 4; b < 185; b++)
	      for (int a = 4; a < 185; a++)
	      {
	        
	       A[a][b]=A[a+5][b+1]*B[a];
	        
	       C[a][b]=C[a+1][b]/A[a][b];
	        
	       A[a][b]=C[a][b]-C[a][b];
	        
	       float var_a=C[a][b]+0.212;
	       float var_b=C[a+4][b+4]+0.866;
	        
	       float var_c=B[a]*0.719;
	       float var_d=B[a-4]+0.686;
	      }

    return 0;
}