#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(710, 370, 830, "zeros");
	int **C = create_two_dim_int(250, 90, "zeros");
	int **B = create_two_dim_int(450, 340, "zeros");

	for (int c = 0; c < 827; c++)
	  for (int b = 0; b < 338; b++)
	    for (int a = 0; a < 448; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+2][c+3]+5;
	      
	      B[a][b]=34;
	      B[a+2][b+2]=17;
	    }

    return 0;
}