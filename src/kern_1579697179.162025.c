#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(570, "random");
	float ***C = create_three_dim_float(680, 580, 990, "random");
	float ***B = create_three_dim_float(60, 460, 610, "random");
	float *A = create_one_dim_float(860, "random");
	float **D = create_two_dim_float(50, 290, "random");

	for (int b = 5; b < 460; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-4][a-3]/E[a]+0.777;
	    
	     E[a]=E[a+1]+C[a][b][a]-B[a][b][a]*0.833/D[a][b];
	    
	     C[a][b][a]=B[a][b][a]+D[a][b];
	     C[a+4][b+4][a+1]=0.849;
	    
	     E[a]=B[a][b][a];
	    
	     float var_a=B[a][b][a]-0.324;
	     float var_b=B[a-1][b-5][a-5]-0.89;
	    
	     C[a][b][a]=B[a][b][a]-E[a];
	     E[a]=B[a-5][b-1][a-2]-C[a][b][a]+E[a]/A[a];
	  }

    return 0;
}