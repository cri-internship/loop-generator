#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(470, 160, 40, "zeros");
	double **C = create_two_dim_double(790, 200, "zeros");
	double ***B = create_three_dim_double(10, 550, 190, "zeros");

	for (int b = 4; b < 160; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-4][a-3]-C[a][b]+0.479;
	    
	     A[a][b][a]=0.297;
	     A[a+3][b][a]=B[a][b][a];
	  }

    return 0;
}