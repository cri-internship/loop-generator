#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(870, "zeros");
	float *D = create_one_dim_float(890, "zeros");
	float **A = create_two_dim_float(60, 310, "zeros");
	float ***B = create_three_dim_float(930, 710, 880, "zeros");
	float *E = create_one_dim_float(620, "zeros");

	for (int b = 0; b < 305; b++)
	  for (int a = 0; a < 55; a++)
	  {
	    
	     float var_a=D[a]*0.889;
	     D[a]=0.554;
	    
	     C[a]=A[a][b]/B[a][b][a]+D[a]-E[a];
	     C[a]=A[a][b]-D[a]+B[a][b][a]*E[a];
	    
	     E[a]=0.949;
	     E[a+1]=0.526;
	    
	     float var_b=A[a][b]/0.576;
	     float var_c=A[a+5][b+5]+0.026;
	  }

    return 0;
}