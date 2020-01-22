#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(10, 320, "random");
	double **A = create_two_dim_double(300, 460, "random");
	double **B = create_two_dim_double(710, 740, "random");

	for (int c = 4; c < 319; c++)
	  for (int b = 4; b < 6; b++)
	    for (int a = 4; a < 6; a++)
	    {
	      
	      B[a][b]=B[a-3][b]+0.429;
	      
	      B[a][b]=B[a-2][b-4]/A[a][b]-C[a][b];
	      
	      C[a][b]=C[a+4][b+1]+0.843;
	      
	      A[a][b]=A[a+1][b+5]+0.871;
	    }

    return 0;
}