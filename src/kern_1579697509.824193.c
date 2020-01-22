#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(330, 220, "zeros");
	float **E = create_two_dim_float(640, 410, "zeros");
	float *D = create_one_dim_float(950, "zeros");
	float ***A = create_three_dim_float(520, 520, 500, "zeros");
	float **C = create_two_dim_float(890, 220, "zeros");

	for (int b = 2; b < 216; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]-A[a][b][a]+C[a][b]*D[a];
	    
	     A[a][b][a]=A[a+1][b][a]/0.967+E[a][b]*D[a];
	    
	     E[a][b]=E[a+2][b+2]/A[a][b][a]*B[a][b];
	    
	     B[a][b]=D[a]-C[a][b]/A[a][b][a]+E[a][b];
	  }

    return 0;
}