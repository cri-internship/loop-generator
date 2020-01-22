#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(690, 210, "zeros");
	double **A = create_two_dim_double(880, 830, "zeros");
	double ***B = create_three_dim_double(520, 360, 50, "zeros");
	double ***D = create_three_dim_double(850, 590, 120, "zeros");
	double **C = create_two_dim_double(800, 760, "zeros");

	for (int b = 0; b < 210; b++)
	  for (int a = 4; a < 690; a++)
	  {
	    
	     E[a][b]=E[a-4][b]-0.983;
	  }

    return 0;
}