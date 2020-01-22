#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(960, 340, 840, "random");
	double *C = create_one_dim_double(90, "random");
	double *D = create_one_dim_double(410, "random");
	double ***B = create_three_dim_double(750, 510, 740, "random");

	for (int b = 5; b < 340; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     C[a]=C[a-5]-B[a][b][a]*D[a];
	    
	     double var_a=A[a][b][a]-0.817;
	     double var_b=A[a-2][b-5][a]-0.234;
	  }

    return 0;
}