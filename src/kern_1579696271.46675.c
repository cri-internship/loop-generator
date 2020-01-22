#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(510, 750, 410, "zeros");
	int ***C = create_three_dim_int(360, 440, 850, "zeros");
	int ***B = create_three_dim_int(420, 790, 990, "zeros");

	for (int c = 5; c < 408; c++)
	  for (int b = 5; b < 440; b++)
	    for (int a = 5; a < 360; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-3][c]-C[a][b][c]/A[a][b][c];
	      
	      A[a][b][c]=A[a+1][b+5][c+2]-18;
	      
	      B[a][b][c]=B[a+5][b+1][c+3]*25;
	      
	      C[a][b][c]=22;
	      C[a-5][b-5][c-5]=33;
	    }

    return 0;
}