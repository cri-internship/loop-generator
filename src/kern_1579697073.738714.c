#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(620, 420, "ones");
	float **E = create_two_dim_float(930, 620, "ones");
	float *C = create_one_dim_float(10, "ones");
	float *B = create_one_dim_float(90, "ones");
	float ***A = create_three_dim_float(330, 890, 100, "ones");

	for (int b = 3; b < 620; b++)
	  for (int a = 4; a < 10; a++)
	  {
	    
	     E[a][b]=E[a-3][b-3]+D[a][b]*C[a];
	    
	     C[a]=C[a-4]/0.576;
	    
	     C[a]=E[a][b]-0.066*A[a][b][a];
	    
	     float var_a=B[a]/0.489;
	     float var_b=B[a-2]+0.611;
	  }

    return 0;
}