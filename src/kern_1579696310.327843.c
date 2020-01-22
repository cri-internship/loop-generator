#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(790, 260, "zeros");
	float *B = create_one_dim_float(130, "zeros");
	float *A = create_one_dim_float(270, "zeros");
	float **E = create_two_dim_float(810, 890, "zeros");
	float *D = create_one_dim_float(470, "zeros");

	for (int c = 0; c < 890; c++)
	  for (int b = 4; b < 130; b++)
	    for (int a = 4; a < 130; a++)
	    {
	      
	      B[a]=B[a-4]/A[a]*0.848-D[a]+E[a][b];
	      
	      E[a][b]=E[a+2][b]+0.954;
	    }

    return 0;
}