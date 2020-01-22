#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(630, 940, "zeros");
	double *B = create_one_dim_double(580, "zeros");

	for (int b = 2; b < 936; b++)
	  for (int a = 3; a < 580; a++)
	  {
	    
	     A[a][b]=A[a-3][b]/B[a];
	    
	     A[a][b]=A[a+5][b+4]+0.861;
	    
	     B[a]=A[a][b];
	     B[a-2]=A[a][b];
	  }

    return 0;
}