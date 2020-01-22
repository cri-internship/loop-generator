#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(970, 970, "random");
	int ***B = create_three_dim_int(130, 20, 230, "random");

	for (int c = 3; c < 230; c++)
	  for (int b = 0; b < 20; b++)
	    for (int a = 5; a < 130; a++)
	    {
	      
	      A[a][b]=0;
	      B[a][b][c]=A[a][b]/B[a][b][c];
	      
	      A[a][b]=A[a+3][b+1]-B[a][b][c];
	      
	      B[a][b][c]=38;
	    }

    return 0;
}