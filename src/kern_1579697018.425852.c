#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(750, "zeros");
	float **B = create_two_dim_float(120, 870, "zeros");
	float **C = create_two_dim_float(290, 430, "zeros");
	float **D = create_two_dim_float(20, 870, "zeros");
	float **E = create_two_dim_float(210, 800, "zeros");

	for (int b = 0; b < 430; b++)
	  for (int a = 0; a < 18; a++)
	  {
	    
	     B[a][b]=E[a][b]-A[a];
	     B[a][b]=B[a][b]-C[a][b]*D[a][b];
	    
	     C[a][b]=C[a+1][b]*0.212;
	    
	     D[a][b]=D[a+2][b]*0.764;
	    
	     C[a][b]=C[a+2][b]*B[a][b]+B[a][b]-E[a][b];
	  }

    return 0;
}