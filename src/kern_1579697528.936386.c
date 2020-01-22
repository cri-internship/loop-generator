#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(920, 840, "random");
	double ***C = create_three_dim_double(30, 290, 250, "random");
	double *A = create_one_dim_double(680, "random");
	double *D = create_one_dim_double(300, "random");
	double *B = create_one_dim_double(720, "random");

	for (int b = 0; b < 840; b++)
	  for (int a = 2; a < 920; a++)
	  {
	    
	     E[a][b]=E[a-2][b]-0.553;
	  }

    return 0;
}