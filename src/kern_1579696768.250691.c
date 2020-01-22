#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(500, 20, "zeros");
	double *A = create_one_dim_double(870, "zeros");
	double ***B = create_three_dim_double(890, 360, 640, "zeros");

	for (int b = 0; b < 355; b++)
	  for (int a = 3; a < 867; a++)
	  {
	    
	     A[a]=0.065;
	     A[a+3]=0.992;
	    
	     B[a][b][a]=0.014;
	     B[a-1][b][a]=A[a]+0.142;
	    
	     B[a][b][a]=0.029;
	    
	     A[a]=0.294;
	  }

    return 0;
}