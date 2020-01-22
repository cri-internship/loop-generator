#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(570, 800, 330, "ones");
	int **A = create_two_dim_int(990, 340, "ones");

	for (int c = 5; c < 328; c++)
	  for (int b = 2; b < 340; b++)
	    for (int a = 4; a < 567; a++)
	    {
	      
	      A[a][b]=A[a-4][b-1]/11;
	      
	      A[a][b]=A[a][b-1]+B[a][b][c];
	      
	      B[a][b][c]=13;
	      B[a-1][b-2][c-5]=44;
	      
	      B[a][b][c]=29;
	      
	      A[a][b]=B[a][b][c]/19;
	      B[a][b][c]=B[a-2][b-1][c-2]/A[a][b];
	    }

    return 0;
}