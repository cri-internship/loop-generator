#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(930, 300, "zeros");
	double **B = create_two_dim_double(910, 810, "zeros");
	double **C = create_two_dim_double(860, 250, "zeros");
	double *A = create_one_dim_double(690, "zeros");

	for (int b = 0; b < 250; b++)
	  for (int a = 0; a < 855; a++)
	  {
	    
	     C[a][b]=D[a][b]*0.509;
	     C[a+5][b]=B[a][b]*B[a][b]-D[a][b];
	    
	     D[a][b]=0.492;
	     D[a+5][b]=0.388;
	  }

    return 0;
}