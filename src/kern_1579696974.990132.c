#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(570, 10, "ones");
	double ***A = create_three_dim_double(210, 430, 880, "ones");
	double *C = create_one_dim_double(260, "ones");
	double **B = create_two_dim_double(440, 160, "ones");
	double *D = create_one_dim_double(630, "ones");

	for (int b = 4; b < 430; b++)
	  for (int a = 0; a < 210; a++)
	  {
	    
	     A[a][b][a]=A[a][b-4][a]/C[a]*E[a][b]-B[a][b]+D[a];
	  }

    return 0;
}