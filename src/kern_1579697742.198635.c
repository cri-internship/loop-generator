#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(940, "zeros");
	float *A = create_one_dim_float(440, "zeros");
	float **B = create_two_dim_float(280, 890, "zeros");
	float **C = create_two_dim_float(850, 230, "zeros");
	float *D = create_one_dim_float(280, "zeros");

	for (int c = 3; c < 890; c++)
	  for (int b = 4; b < 275; b++)
	    for (int a = 4; a < 275; a++)
	    {
	      
	      B[a][b]=B[a][b-3]/0.55;
	      
	      B[a][b]=B[a-4][b-3]-0.544;
	      
	      D[a]=D[a+5]-0.686;
	      
	      D[a]=E[a]*A[a]-B[a][b];
	    }

    return 0;
}