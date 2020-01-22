#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(360, "zeros");
	float **D = create_two_dim_float(510, 140, "zeros");
	float *A = create_one_dim_float(510, "zeros");
	float ***B = create_three_dim_float(570, 850, 130, "zeros");
	float *C = create_one_dim_float(900, "zeros");

	for (int c = 0; c < 355; c++)
	  for (int b = 0; b < 355; b++)
	    for (int a = 0; a < 355; a++)
	    {
	      
	      E[a]=C[a]/0.677+D[a][b];
	      B[a][b][c]=C[a+2]+A[a]-E[a]/B[a][b][c];
	      
	      D[a][b]=E[a]*C[a]+B[a][b][c];
	      C[a]=E[a+5]+C[a]*B[a][b][c];
	    }

    return 0;
}