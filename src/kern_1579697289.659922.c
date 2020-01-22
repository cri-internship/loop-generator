#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(990, 200, 600, "ones");
	int **A = create_two_dim_int(750, 470, "ones");

	for (int c = 2; c < 600; c++)
	  for (int b = 5; b < 200; b++)
	    for (int a = 5; a < 750; a++)
	    {
	      
	      A[a][b]=A[a-2][b-4]*B[a][b][c];
	      
	      B[a][b][c]=B[a-3][b-1][c-2]*A[a][b];
	      
	      A[a][b]=34;
	      
	      B[a][b][c]=39;
	      
	      int var_b=B[a][b][c]+29;
	      int var_c=B[a-4][b-5][c-1]*43;
	    }

    return 0;
}