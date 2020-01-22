#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(130, "zeros");
	double ***D = create_three_dim_double(150, 630, 570, "zeros");
	double *C = create_one_dim_double(70, "zeros");
	double **B = create_two_dim_double(790, 250, "zeros");

	for (int b = 5; b < 250; b++)
	  for (int a = 4; a < 65; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b][a-4]-0.981;
	    
	     B[a][b]=B[a-4][b-5]+D[a][b][a];
	    
	     C[a]=C[a+5]*0.583;
	    
	     C[a]=B[a][b]/C[a]*A[a]+C[a];
	     A[a]=B[a-3][b-4]/C[a]+A[a]-D[a][b][a];
	    
	     D[a][b][a]=C[a]+B[a][b];
	     B[a][b]=C[a-4]*D[a][b][a];
	  }

    return 0;
}