#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(970, 520, "random");
	float *C = create_one_dim_float(990, "random");
	float **D = create_two_dim_float(30, 1000, "random");
	float ***E = create_three_dim_float(350, 970, 260, "random");
	float **B = create_two_dim_float(990, 940, "random");

	for (int b = 5; b < 516; b++)
	  for (int a = 5; a < 28; a++)
	  {
	    
	     D[a][b]=D[a+2][b+2]/0.183;
	    
	     A[a][b]=A[a+3][b+4]/0.405;
	    
	     B[a][b]=B[a][b+2]*D[a][b]+C[a]/0.201-D[a][b];
	    
	     E[a][b][a]=B[a][b]/C[a];
	     E[a][b-5][a-5]=C[a]+D[a][b]*0.973-A[a][b];
	  }

    return 0;
}