#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(590, 560, 870, "random");
	double *A = create_one_dim_double(400, "random");
	double **C = create_two_dim_double(270, 960, "random");
	double *D = create_one_dim_double(30, "random");

	for (int b = 2; b < 557; b++)
	  for (int a = 5; a < 587; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-5]/0.515;
	    
	     B[a][b][a]=B[a+3][b+3][a+2]/0.143;
	  }

    return 0;
}