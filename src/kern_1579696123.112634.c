#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(190, "zeros");
	double *A = create_one_dim_double(90, "zeros");
	double ***B = create_three_dim_double(580, 20, 740, "zeros");
	double **D = create_two_dim_double(110, 80, "zeros");
	double *E = create_one_dim_double(580, "zeros");

	for (int b = 0; b < 80; b++)
	  for (int a = 0; a < 88; a++)
	  {
	    
	     B[a][b][a]=A[a]+B[a][b][a]*E[a];
	     C[a]=A[a+2]*D[a][b]/C[a]+D[a][b];
	    
	     E[a]=C[a]*A[a]+0.459-D[a][b]/B[a][b][a];
	     D[a][b]=C[a+2]-B[a][b][a]*A[a]+0.41/E[a];
	  }

    return 0;
}