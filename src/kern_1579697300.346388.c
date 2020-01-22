#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(80, 460, "zeros");
	double *A = create_one_dim_double(60, "zeros");
	double ***C = create_three_dim_double(730, 560, 270, "zeros");

	for (int b = 5; b < 59; b++)
	  for (int a = 5; a < 59; a++)
	  {
	    
	     C[a][b][a]=A[a]*B[a][b];
	     B[a][b]=A[a+1]/C[a][b][a]-B[a][b];
	    
	     A[a]=A[a]+C[a][b][a];
	     B[a][b]=A[a-5]/C[a][b][a]-B[a][b];
	  }

    return 0;
}