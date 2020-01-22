#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(410, "zeros");
	double ***B = create_three_dim_double(330, 940, 10, "zeros");
	double **C = create_two_dim_double(70, 750, "zeros");
	double *D = create_one_dim_double(630, "zeros");

	for (int b = 4; b < 750; b++)
	  for (int a = 5; a < 70; a++)
	  {
	    
	     C[a][b]=C[a-2][b-4]-A[a];
	    
	     B[a][b][a]=B[a][b-2][a-1]/D[a];
	    
	     C[a][b]=C[a-5][b-4]/B[a][b][a]+D[a];
	    
	     B[a][b][a]=C[a][b];
	  }

    return 0;
}