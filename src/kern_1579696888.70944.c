#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(790, 50, 240, "zeros");
	double **B = create_two_dim_double(1000, 590, "zeros");
	double ***C = create_three_dim_double(610, 460, 240, "zeros");

	for (int b = 5; b < 50; b++)
	  for (int a = 4; a < 790; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-5][a-4]+0.447;
	    
	     double var_a=A[a][b][a]*0.574;
	     double var_b=A[a-3][b-2][a]-0.819;
	  }

    return 0;
}