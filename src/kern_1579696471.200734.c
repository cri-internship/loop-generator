#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(960, 340, 250, "ones");
	double *C = create_one_dim_double(480, "ones");
	double **E = create_two_dim_double(510, 410, "ones");
	double ***D = create_three_dim_double(670, 530, 670, "ones");
	double **A = create_two_dim_double(550, 490, "ones");

	for (int b = 2; b < 486; b++)
	  for (int a = 3; a < 547; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-2][a-3]+0.61;
	    
	     A[a][b]=A[a+3][b+4]-0.364;
	  }

    return 0;
}