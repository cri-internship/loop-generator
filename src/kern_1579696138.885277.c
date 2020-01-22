#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(720, "zeros");
	double *A = create_one_dim_double(390, "zeros");
	double ***D = create_three_dim_double(930, 670, 710, "zeros");
	double **C = create_two_dim_double(470, 780, "zeros");
	double ***B = create_three_dim_double(690, 230, 220, "zeros");

	for (int c = 3; c < 720; c++)
	  for (int b = 3; b < 720; b++)
	    for (int a = 3; a < 720; a++)
	    {
	      
	      E[a]=0.882;
	      E[a-3]=0.627;
	    }

    return 0;
}