#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(960, "ones");
	double ***A = create_three_dim_double(580, 70, 690, "ones");
	double ***C = create_three_dim_double(800, 500, 380, "ones");
	double *B = create_one_dim_double(230, "ones");

	for (int b = 0; b < 497; b++)
	  for (int a = 0; a < 795; a++)
	  {
	    
	     C[a][b][a]=C[a+4][b+3][a+5]/A[a][b][a];
	  }

    return 0;
}