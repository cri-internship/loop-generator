#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(190, 90, "zeros");
	float *C = create_one_dim_float(850, "zeros");
	float *D = create_one_dim_float(640, "zeros");
	float **E = create_two_dim_float(330, 890, "zeros");
	float **A = create_two_dim_float(740, 760, "zeros");

	for (int b = 0; b < 87; b++)
	  for (int a = 1; a < 189; a++)
	  {
	    
	     E[a][b]=E[a+4][b+1]+C[a];
	    
	     B[a][b]=B[a+1][b+3]*0.455;
	    
	     E[a][b]=D[a]+0.45;
	    
	     D[a]=E[a][b]/A[a][b]+E[a][b]-B[a][b];
	     D[a+5]=0.276*E[a][b]-B[a][b]/A[a][b];
	    
	     A[a][b]=A[a][b]*B[a][b]-D[a]/E[a][b]+C[a];
	     E[a][b]=A[a-1][b]/B[a][b]-D[a]+C[a]*E[a][b];
	  }

    return 0;
}