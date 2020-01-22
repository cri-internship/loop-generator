#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(540, 200, "zeros");
	double ***B = create_three_dim_double(260, 1000, 550, "zeros");

	for (int b = 0; b < 995; b++)
	  for (int a = 3; a < 255; a++)
	  {
	    
	     B[a][b][a]=B[a][b+4][a+5]/A[a][b];
	    
	     B[a][b][a]=B[a+3][b+5][a+2]-A[a][b];
	  }

    return 0;
}