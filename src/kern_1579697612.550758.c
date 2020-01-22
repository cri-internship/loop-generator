#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(470, 400, "zeros");
	double ***D = create_three_dim_double(210, 990, 250, "zeros");
	double ***E = create_three_dim_double(610, 810, 10, "zeros");
	double **C = create_two_dim_double(550, 860, "zeros");
	double *B = create_one_dim_double(80, "zeros");

	for (int b = 0; b < 810; b++)
	  for (int a = 0; a < 607; a++)
	  {
	    
	     E[a][b][a]=E[a+3][b][a]/0.082;
	  }

    return 0;
}