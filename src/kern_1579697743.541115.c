#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(180, "zeros");
	double **B = create_two_dim_double(510, 390, "zeros");
	double **D = create_two_dim_double(140, 380, "zeros");
	double **A = create_two_dim_double(620, 480, "zeros");
	double *C = create_one_dim_double(850, "zeros");

	for (int b = 1; b < 180; b++)
	  for (int a = 1; a < 180; a++)
	  {
	    
	     E[a]=0.07;
	     E[a-1]=0.402;
	    
	     C[a]=0.016;
	     C[a+1]=0.354;
	  }

    return 0;
}