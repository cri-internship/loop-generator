#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(130, 880, 400, "zeros");
	double **C = create_two_dim_double(510, 450, "zeros");
	double ***B = create_three_dim_double(170, 10, 310, "zeros");

	for (int b = 0; b < 9; b++)
	  for (int a = 0; a < 129; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b][a+4]*A[a][b][a]-C[a][b];
	    
	     A[a][b][a]=A[a+1][b+3][a]/0.991;
	    
	     B[a][b][a]=0.487;
	  }

    return 0;
}