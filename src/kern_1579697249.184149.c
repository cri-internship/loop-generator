#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(490, "random");
	double ***A = create_three_dim_double(700, 670, 390, "random");
	double ***C = create_three_dim_double(210, 160, 40, "random");

	for (int b = 0; b < 155; b++)
	  for (int a = 1; a < 205; a++)
	  {
	    
	     B[a]=B[a-1]+A[a][b][a]-0.113;
	    
	     B[a]=B[a+5]-0.026;
	    
	     C[a][b][a]=B[a];
	     C[a+5][b+5][a+2]=B[a]/A[a][b][a];
	  }

    return 0;
}