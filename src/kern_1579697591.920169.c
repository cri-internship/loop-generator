#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(550, 760, "ones");
	float **D = create_two_dim_float(920, 180, "ones");
	float *E = create_one_dim_float(370, "ones");
	float ***B = create_three_dim_float(350, 540, 150, "ones");
	float ***C = create_three_dim_float(130, 650, 580, "ones");

	for (int b = 2; b < 176; b++)
	  for (int a = 5; a < 130; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-1][a-2]/B[a][b][a]+E[a]-D[a][b]*A[a][b];
	    
	     C[a][b][a]=C[a][b-2][a]+B[a][b][a];
	    
	     D[a][b]=D[a+3][b+4]/0.919;
	    
	     B[a][b][a]=B[a+2][b+2][a]-0.799;
	    
	     E[a]=E[a+5]-C[a][b][a]*D[a][b]+A[a][b];
	    
	     B[a][b][a]=0.654;
	    
	     float var_a=A[a][b]+0.364;
	     float var_b=A[a-5][b-1]-0.326;
	  }

    return 0;
}