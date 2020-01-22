#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(210, 350, "random");
	double ***C = create_three_dim_double(910, 390, 600, "random");
	double *B = create_one_dim_double(880, "random");

	for (int b = 5; b < 390; b++)
	  for (int a = 4; a < 910; a++)
	  {
	    
	     A[a][b]=C[a][b][a]-A[a][b]+B[a];
	     C[a][b][a]=C[a-4][b-5][a-2]*B[a];
	  }

    return 0;
}