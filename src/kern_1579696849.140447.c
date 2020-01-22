#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(670, 310, 820, "zeros");
	double ***C = create_three_dim_double(740, 380, 160, "zeros");
	double **B = create_two_dim_double(780, 540, "zeros");

	for (int c = 4; c < 160; c++)
	  for (int b = 5; b < 308; b++)
	    for (int a = 3; a < 670; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-5][c-4]*0.988;
	      
	      A[a][b][c]=A[a-3][b-2][c-3]*0.486;
	      
	      B[a][b]=B[a+3][b]/0.358;
	      
	      B[a][b]=0.748;
	      
	      B[a][b]=A[a][b][c]/B[a][b];
	      A[a][b][c]=A[a][b+2][c+4]*0.815;
	    }

    return 0;
}