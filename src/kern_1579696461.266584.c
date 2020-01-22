#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(680, 70, 960, "ones");
	int ***B = create_three_dim_int(450, 430, 670, "ones");
	int **A = create_two_dim_int(930, 670, "ones");

	for (int c = 5; c < 668; c++)
	  for (int b = 5; b < 425; b++)
	    for (int a = 5; a < 445; a++)
	    {
	      
	      A[a][b]=A[a+4][b]/44;
	      
	      B[a][b][c]=B[a+5][b+5][c+2]-44;
	      
	      A[a][b]=B[a][b][c]+C[a][b][c];
	      
	      int var_a=B[a][b][c]-36;
	      int var_b=B[a-5][b-5][c-5]*2;
	    }

    return 0;
}