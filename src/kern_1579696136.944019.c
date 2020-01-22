#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(430, "zeros");
	double **A = create_two_dim_double(920, 850, "zeros");
	double ***B = create_three_dim_double(210, 460, 570, "zeros");
	double ***D = create_three_dim_double(250, 870, 280, "zeros");

	for (int b = 0; b < 847; b++)
	  for (int a = 0; a < 917; a++)
	  {
	    
	     A[a][b]=A[a+3][b+3]-0.081;
	  }

    return 0;
}