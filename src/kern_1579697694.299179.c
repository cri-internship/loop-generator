#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(290, "zeros");
	double ***A = create_three_dim_double(260, 530, 210, "zeros");
	double **D = create_two_dim_double(590, 660, "zeros");
	double *B = create_one_dim_double(890, "zeros");

	for (int b = 4; b < 660; b++)
	  for (int a = 5; a < 590; a++)
	  {
	    
	     D[a][b]=D[a-5][b-4]-B[a]+A[a][b][a]*C[a];
	  }

    return 0;
}