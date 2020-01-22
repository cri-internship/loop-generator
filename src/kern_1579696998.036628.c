#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(870, 590, "zeros");
	double **A = create_two_dim_double(660, 260, "zeros");
	double ***E = create_three_dim_double(210, 420, 650, "zeros");
	double *D = create_one_dim_double(810, "zeros");
	double **B = create_two_dim_double(940, 610, "zeros");

	for (int b = 0; b < 258; b++)
	  for (int a = 0; a < 658; a++)
	  {
	    
	     A[a][b]=A[a+2][b+2]*C[a][b];
	    
	     double var_a=D[a]/0.747;
	     double var_b=D[a+2]/0.481;
	  }

    return 0;
}