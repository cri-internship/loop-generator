#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(950, "ones");
	double **A = create_two_dim_double(290, 600, "ones");
	double ***C = create_three_dim_double(10, 80, 540, "ones");
	double **B = create_two_dim_double(870, 340, "ones");
	double ***E = create_three_dim_double(340, 640, 990, "ones");

	for (int b = 2; b < 640; b++)
	  for (int a = 5; a < 340; a++)
	  {
	    
	     D[a]=D[a+4]-B[a][b]*A[a][b];
	    
	     D[a]=C[a][b][a]+E[a][b][a]*A[a][b];
	    
	     E[a][b][a]=D[a]/D[a]-C[a][b][a]+0.549;
	     E[a][b-2][a-5]=A[a][b]*B[a][b];
	  }

    return 0;
}