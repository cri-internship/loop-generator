#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(290, "random");
	double ***D = create_three_dim_double(410, 950, 290, "random");
	double **E = create_two_dim_double(270, 210, "random");
	double ***C = create_three_dim_double(220, 630, 150, "random");
	double **A = create_two_dim_double(940, 990, "random");

	for (int b = 0; b < 950; b++)
	  for (int a = 5; a < 290; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b][a-1]/0.621;
	    
	     A[a][b]=A[a+1][b+5]-0.374;
	    
	     A[a][b]=B[a]+D[a][b][a]/A[a][b]*E[a][b]-C[a][b][a];
	     B[a]=B[a-5]-D[a][b][a]*A[a][b]/0.536;
	  }

    return 0;
}