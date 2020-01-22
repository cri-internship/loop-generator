#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(410, 210, 530, "random");
	float ***E = create_three_dim_float(530, 650, 390, "random");
	float *B = create_one_dim_float(800, "random");
	float *A = create_one_dim_float(230, "random");
	float *D = create_one_dim_float(750, "random");

	for (int b = 0; b < 647; b++)
	  for (int a = 5; a < 227; a++)
	  {
	    
	     D[a]=D[a-5]*E[a][b][a]/B[a];
	    
	     A[a]=A[a-1]/0.695;
	    
	     E[a][b][a]=E[a][b+3][a+1]*0.448-A[a];
	    
	     A[a]=A[a+3]/0.011;
	    
	     E[a][b][a]=A[a]*C[a][b][a]-E[a][b][a]+B[a]/C[a][b][a];
	  }

    return 0;
}