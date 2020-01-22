#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(910, 940, "random");
	float ***C = create_three_dim_float(400, 650, 460, "random");
	float *D = create_one_dim_float(930, "random");
	float **E = create_two_dim_float(300, 360, "random");
	float *A = create_one_dim_float(980, "random");

	for (int b = 5; b < 358; b++)
	  for (int a = 4; a < 299; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-5][a-3]/B[a][b]*D[a]-E[a][b]+A[a];
	    
	     E[a][b]=E[a-4][b-1]/C[a][b][a];
	    
	     C[a][b][a]=C[a+1][b+2][a+5]/0.904;
	    
	     E[a][b]=E[a+1][b+2]-D[a];
	    
	     A[a]=A[a+2]+0.437;
	    
	     float var_a=C[a][b][a]+0.698;
	     float var_b=C[a][b-1][a-1]+0.373;
	  }

    return 0;
}