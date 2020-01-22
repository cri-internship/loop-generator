#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(350, 110, 500, "zeros");
	double *D = create_one_dim_double(770, "zeros");
	double **A = create_two_dim_double(150, 1000, "zeros");
	double **B = create_two_dim_double(960, 610, "zeros");

	for (int b = 5; b < 110; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     D[a]=D[a-5]+A[a][b]-B[a][b];
	    
	     C[a][b][a]=C[a-4][b-4][a-4]+D[a]*D[a]/A[a][b];
	    
	     C[a][b][a]=0.047;
	    
	     B[a][b]=D[a]+0.86-C[a][b][a];
	     D[a]=D[a]+0.593-A[a][b]/B[a][b];
	  }

    return 0;
}