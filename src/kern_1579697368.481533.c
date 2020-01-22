#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(400, 170, 1000, "random");
	float ***C = create_three_dim_float(890, 230, 70, "random");
	float *E = create_one_dim_float(10, "random");
	float **D = create_two_dim_float(950, 900, "random");
	float ***A = create_three_dim_float(780, 140, 680, "random");

	for (int b = 2; b < 140; b++)
	  for (int a = 4; a < 9; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-2][a-3]+0.01;
	    
	     A[a][b][a]=A[a-3][b-1][a-1]*0.612;
	    
	     C[a][b][a]=C[a-1][b-2][a-3]*0.844;
	    
	     B[a][b][a]=B[a][b+5][a+5]/0.308;
	    
	     E[a]=0.598;
	     E[a+1]=0.295;
	    
	     E[a]=0.394;
	    
	     float var_a=E[a]+0.693;
	     float var_b=E[a-4]-0.16;
	  }

    return 0;
}