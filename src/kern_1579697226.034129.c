#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(640, 230, 810, "ones");
	float **C = create_two_dim_float(500, 370, "ones");
	float *D = create_one_dim_float(710, "ones");
	float *B = create_one_dim_float(910, "ones");
	float **A = create_two_dim_float(420, 620, "ones");

	for (int d = 5; d < 808; d++)
	  for (int c = 3; c < 229; c++)
	    for (int b = 1; b < 497; b++)
	      for (int a = 1; a < 497; a++)
	      {
	        
	       E[a][b][c]=E[a-1][b-3][c-5]/0.727*C[a][b];
	        
	       C[a][b]=C[a+3][b+3]/0.935;
	        
	       E[a][b][c]=E[a][b][c]-A[a][b];
	       A[a][b]=E[a][b+1][c+2]+B[a]*D[a]/A[a][b];
	      }

    return 0;
}