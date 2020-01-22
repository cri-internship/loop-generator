#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(350, 860, "zeros");
	double *A = create_one_dim_double(150, "zeros");
	double ***C = create_three_dim_double(100, 340, 60, "zeros");
	double ***B = create_three_dim_double(320, 380, 120, "zeros");

	for (int b = 5; b < 376; b++)
	  for (int a = 4; a < 149; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-5][a-2]/D[a][b]-C[a][b][a];
	    
	     B[a][b][a]=B[a+4][b+4][a+2]*0.392;
	    
	     A[a]=A[a+1]+B[a][b][a]-D[a][b]/0.335;
	  }

    return 0;
}