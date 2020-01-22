#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(190, 630, 760, "zeros");
	float **A = create_two_dim_float(850, 430, "zeros");
	float **B = create_two_dim_float(860, 620, "zeros");
	float *D = create_one_dim_float(760, "zeros");
	float *E = create_one_dim_float(20, "zeros");

	for (int b = 2; b < 626; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     D[a]=D[a-5]/0.083;
	    
	     E[a]=D[a]-B[a][b]+A[a][b]/E[a]*B[a][b];
	    
	     E[a]=0.777;
	    
	     C[a][b][a]=D[a];
	     C[a+3][b+4][a]=E[a]+B[a][b];
	    
	     C[a][b][a]=C[a][b][a]+E[a]/D[a]-B[a][b];
	     D[a]=C[a-2][b-2][a-4]*D[a]+A[a][b];
	  }

    return 0;
}