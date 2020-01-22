#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(490, "random");
	float *E = create_one_dim_float(260, "random");
	float *C = create_one_dim_float(1000, "random");
	float *A = create_one_dim_float(580, "random");
	float ***D = create_three_dim_float(590, 130, 170, "random");

	for (int b = 4; b < 490; b++)
	  for (int a = 4; a < 490; a++)
	  {
	    
	     C[a]=B[a]+0.207/A[a]*D[a][b][a];
	     B[a]=C[a]*C[a];
	    
	     B[a]=0.235;
	    
	     D[a][b][a]=C[a]+B[a]*D[a][b][a]/B[a];
	     A[a]=C[a+5]+B[a]*0.231-A[a];
	  }

    return 0;
}