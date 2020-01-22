#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(130, "zeros");
	float **D = create_two_dim_float(300, 800, "zeros");
	float **B = create_two_dim_float(230, 310, "zeros");
	float ***C = create_three_dim_float(790, 980, 840, "zeros");
	float *E = create_one_dim_float(100, "zeros");

	for (int b = 0; b < 796; b++)
	  for (int a = 3; a < 98; a++)
	  {
	    
	     A[a]=A[a-1]-0.897;
	    
	     D[a][b]=D[a+3][b+1]+0.31*A[a];
	    
	     E[a]=E[a+1]/0.894;
	    
	     D[a][b]=D[a+3][b+4]-0.188;
	    
	     E[a]=D[a][b]*C[a][b][a]-B[a][b];
	    
	     D[a][b]=E[a]*C[a][b][a];
	     C[a][b][a]=E[a-3]+D[a][b]-C[a][b][a];
	    
	     float var_a=D[a][b]+0.063;
	     float var_b=D[a+1][b+1]*0.842;
	  }

    return 0;
}