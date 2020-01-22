#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(520, 630, 690, "random");
	int *B = create_one_dim_int(310, "random");
	int *C = create_one_dim_int(860, "random");
	int **A = create_two_dim_int(580, 800, "random");

	for (int c = 0; c < 689; c++)
	  for (int b = 1; b < 627; b++)
	    for (int a = 3; a < 515; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b+3][c+1]+17;
	      
	      A[a][b]=38;
	      A[a-3][b-1]=26;
	    }

    return 0;
}