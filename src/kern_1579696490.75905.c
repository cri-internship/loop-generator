#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 340, "random");
	float *D = create_one_dim_float(690, "random");
	float **B = create_two_dim_float(580, 900, "random");
	float ***C = create_three_dim_float(320, 760, 170, "random");

	for (int b = 0; b < 337; b++)
	  for (int a = 0; a < 107; a++)
	  {
	    
	     A[a][b]=A[a][b+3]-C[a][b][a]*D[a];
	    
	     C[a][b][a]=C[a+1][b+5][a+3]/A[a][b]*B[a][b]+B[a][b];
	    
	     float var_a=A[a][b]/0.454;
	     float var_b=A[a+3][b+2]*0.844;
	  }

    return 0;
}