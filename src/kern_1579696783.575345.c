#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(330, "zeros");
	float **A = create_two_dim_float(630, 210, "zeros");
	float *D = create_one_dim_float(370, "zeros");
	float ***E = create_three_dim_float(450, 800, 40, "zeros");
	float *B = create_one_dim_float(270, "zeros");

	for (int b = 5; b < 265; b++)
	  for (int a = 5; a < 265; a++)
	  {
	    
	     B[a]=B[a+5]+0.222;
	    
	     B[a]=B[a+1]/0.943;
	    
	     D[a]=B[a]-E[a][b][a];
	     D[a-5]=C[a]*A[a][b]+C[a];
	  }

    return 0;
}