#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "zeros");
	double ***B = create_three_dim_double(610, 840, 890, "zeros");

	for (int c = 3; c < 885; c++)
	  for (int b = 5; b < 840; b++)
	    for (int a = 5; a < 610; a++)
	    {
	      
	      double var_a=B[a][b][c]+0.562;
	      double var_b=B[a-5][b-5][c-3]-0.056;
	      
	      A[a]=B[a][b][c]+0.68;
	      B[a][b][c]=B[a][b][c+5]*A[a];
	    }

    return 0;
}