#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(350, 510, 970, "zeros");
	float **A = create_two_dim_float(680, 430, "zeros");
	float *B = create_one_dim_float(150, "zeros");
	float **D = create_two_dim_float(480, 250, "zeros");
	float *E = create_one_dim_float(970, "zeros");

	for (int b = 3; b < 250; b++)
	  for (int a = 4; a < 145; a++)
	  {
	    
	     D[a][b]=D[a-4][b-3]-0.495;
	    
	     C[a][b][a]=C[a][b+4][a+2]-A[a][b]*D[a][b];
	    
	     B[a]=B[a+5]*0.748;
	    
	     B[a]=A[a][b]*C[a][b][a]+0.067;
	    
	     E[a]=D[a][b]-B[a]/E[a]+A[a][b]*B[a];
	     D[a][b]=D[a+2][b]/A[a][b]+E[a]-0.745*B[a];
	  }

    return 0;
}