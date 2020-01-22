#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(430, 310, "zeros");
	double **C = create_two_dim_double(280, 580, "zeros");
	double **A = create_two_dim_double(190, 400, "zeros");

	for (int b = 5; b < 310; b++)
	  for (int a = 2; a < 280; a++)
	  {
	    
	     C[a][b]=C[a-1][b]*0.543;
	    
	     C[a][b]=B[a][b]+C[a][b];
	     A[a][b]=B[a-2][b-5]/A[a][b];
	  }

    return 0;
}