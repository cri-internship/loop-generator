#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(10, 280, 600, "random");
	double *D = create_one_dim_double(40, "random");
	double ***E = create_three_dim_double(210, 780, 780, "random");
	double **B = create_two_dim_double(610, 180, "random");
	double **A = create_two_dim_double(930, 760, "random");

	for (int b = 0; b < 759; b++)
	  for (int a = 0; a < 206; a++)
	  {
	    
	     A[a][b]=A[a][b+1]+B[a][b]*E[a][b][a];
	    
	     E[a][b][a]=E[a+4][b+2][a+2]-A[a][b]/0.971+C[a][b][a];
	  }

    return 0;
}