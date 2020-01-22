#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(600, 690, 650, "random");
	float *C = create_one_dim_float(490, "random");
	float *A = create_one_dim_float(970, "random");
	float ***B = create_three_dim_float(250, 900, 510, "random");

	for (int b = 2; b < 690; b++)
	  for (int a = 5; a < 245; a++)
	  {
	    
	     C[a]=C[a-5]+0.2;
	    
	     B[a][b][a]=B[a+5][b+1][a+2]+D[a][b][a]/C[a];
	    
	     float var_a=D[a][b][a]-0.2;
	     float var_b=D[a-5][b-2][a-5]*0.802;
	    
	     A[a]=B[a][b][a]*A[a];
	     D[a][b][a]=B[a-5][b-1][a-2]+A[a]/C[a]-D[a][b][a];
	  }

    return 0;
}