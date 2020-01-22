#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(610, "ones");
	float **D = create_two_dim_float(990, 490, "ones");
	float **B = create_two_dim_float(30, 820, "ones");
	float *C = create_one_dim_float(670, "ones");

	for (int c = 0; c < 605; c++)
	  for (int b = 0; b < 605; b++)
	    for (int a = 0; a < 605; a++)
	    {
	      
	      C[a]=0.387;
	      float  var_a=C[a]*0.488;
	      
	      A[a]=0.505+B[a][b];
	      D[a][b]=A[a]+C[a]-C[a]*D[a][b];
	      
	      A[a]=B[a][b]/D[a][b]*C[a];
	    }

    return 0;
}