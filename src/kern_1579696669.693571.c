#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(500, 330, 820, "zeros");
	float ***D = create_three_dim_float(120, 860, 420, "zeros");
	float *B = create_one_dim_float(630, "zeros");
	float *A = create_one_dim_float(360, "zeros");
	float **C = create_two_dim_float(630, 180, "zeros");

	for (int b = 0; b < 325; b++)
	  for (int a = 5; a < 357; a++)
	  {
	    
	     A[a]=A[a+3]*0.019;
	    
	     E[a][b][a]=0.437;
	     E[a+1][b+5][a]=0.043;
	    
	     E[a][b][a]=A[a]*0.701;
	     A[a]=A[a-5]+C[a][b]*B[a]/D[a][b][a];
	  }

    return 0;
}