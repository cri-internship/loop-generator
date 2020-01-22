#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(600, "random");
	float *A = create_one_dim_float(460, "random");
	float **B = create_two_dim_float(740, 700, "random");
	float ***D = create_three_dim_float(90, 490, 490, "random");
	float *E = create_one_dim_float(630, "random");

	for (int b = 0; b < 488; b++)
	  for (int a = 5; a < 89; a++)
	  {
	    
	     C[a]=C[a+1]-0.842;
	    
	     C[a]=C[a+5]/0.414;
	    
	     B[a][b]=B[a+3][b+4]/0.785;
	    
	     D[a][b][a]=D[a+1][b+2][a+1]*0.073;
	    
	     A[a]=E[a]/C[a];
	     A[a-5]=D[a][b][a]*B[a][b]/B[a][b];
	    
	     E[a]=B[a][b]/0.274+A[a]*C[a];
	     D[a][b][a]=B[a+4][b+2]/0.747;
	    
	     B[a][b]=E[a]-B[a][b]/C[a]*D[a][b][a];
	     C[a]=E[a-5]-C[a]+D[a][b][a]/A[a];
	  }

    return 0;
}