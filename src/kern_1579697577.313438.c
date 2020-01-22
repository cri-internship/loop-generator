#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(720, 590, "ones");
	double *C = create_one_dim_double(880, "ones");
	double **A = create_two_dim_double(100, 820, "ones");
	double ***B = create_three_dim_double(780, 110, 320, "ones");
	double ***E = create_three_dim_double(730, 620, 280, "ones");

	for (int b = 0; b < 620; b++)
	  for (int a = 0; a < 728; a++)
	  {
	    
	     E[a][b][a]=0.817;
	     E[a+2][b][a]=0.774;
	  }

    return 0;
}