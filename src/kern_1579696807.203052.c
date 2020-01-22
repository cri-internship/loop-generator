#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(450, 630, "zeros");
	double ***A = create_three_dim_double(150, 600, 230, "zeros");
	double ***C = create_three_dim_double(90, 710, 600, "zeros");
	double *B = create_one_dim_double(70, "zeros");

	for (int b = 4; b < 630; b++)
	  for (int a = 5; a < 450; a++)
	  {
	    
	     D[a][b]=D[a-5][b-4]+0.892-A[a][b][a];
	  }

    return 0;
}