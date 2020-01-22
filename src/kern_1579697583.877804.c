#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(640, 360, "zeros");
	double ***C = create_three_dim_double(90, 620, 40, "zeros");
	double *B = create_one_dim_double(330, "zeros");

	for (int b = 2; b < 360; b++)
	  for (int a = 4; a < 86; a++)
	  {
	    
	     A[a][b]=A[a-4][b-2]*0.271;
	    
	     C[a][b][a]=A[a][b];
	     C[a+4][b+5][a+3]=B[a];
	  }

    return 0;
}