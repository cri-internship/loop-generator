#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(360, 770, 930, "zeros");
	double **B = create_two_dim_double(40, 40, "zeros");
	double ***D = create_three_dim_double(190, 260, 950, "zeros");
	double *C = create_one_dim_double(70, "zeros");

	for (int b = 4; b < 39; b++)
	  for (int a = 3; a < 36; a++)
	  {
	    
	     B[a][b]=B[a-3][b]+0.729;
	    
	     B[a][b]=B[a-1][b-4]+0.303;
	    
	     A[a][b][a]=A[a+5][b+1][a+1]+C[a]/B[a][b];
	    
	     D[a][b][a]=D[a][b][a+2]-0.647;
	    
	     D[a][b][a]=A[a][b][a]/A[a][b][a];
	    
	     C[a]=B[a][b]/0.534*A[a][b][a]+C[a];
	     B[a][b]=B[a+4][b+1]/C[a]*D[a][b][a];
	  }

    return 0;
}