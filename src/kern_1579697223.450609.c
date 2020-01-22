#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(770, 890, 450, "ones");
	double **B = create_two_dim_double(430, 170, "ones");

	for (int c = 1; c < 448; c++)
	  for (int b = 5; b < 170; b++)
	    for (int a = 5; a < 430; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]/0.194;
	      
	      B[a][b]=B[a-5][b-5]-A[a][b][c];
	      
	      A[a][b][c]=A[a][b][c+2]+B[a][b];
	      
	      A[a][b][c]=0.34;
	    }

    return 0;
}