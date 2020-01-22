#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(540, 230, 90, "zeros");
	double *A = create_one_dim_double(100, "zeros");
	double ***C = create_three_dim_double(900, 400, 640, "zeros");
	double ***B = create_three_dim_double(440, 10, 230, "zeros");
	double ***E = create_three_dim_double(410, 350, 870, "zeros");

	for (int b = 0; b < 6; b++)
	  for (int a = 0; a < 438; a++)
	  {
	    
	     B[a][b][a]=0.779;
	     B[a+1][b+4][a+2]=0.854;
	  }

    return 0;
}