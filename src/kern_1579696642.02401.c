#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(830, "random");
	double *A = create_one_dim_double(830, "random");
	double ***C = create_three_dim_double(20, 330, 190, "random");
	double **E = create_two_dim_double(710, 140, "random");
	double *B = create_one_dim_double(970, "random");

	for (int b = 0; b < 140; b++)
	  for (int a = 0; a < 705; a++)
	  {
	    
	     E[a][b]=E[a+5][b]*0.864;
	    
	     A[a]=0.829;
	     A[a]=0.019;
	  }

    return 0;
}