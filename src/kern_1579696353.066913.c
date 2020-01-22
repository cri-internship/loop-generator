#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(380, 710, 980, "random");
	int *C = create_one_dim_int(840, "random");
	int ***A = create_three_dim_int(760, 410, 370, "random");
	int **E = create_two_dim_int(490, 480, "random");
	int ***B = create_three_dim_int(310, 940, 200, "random");

	for (int c = 1; c < 200; c++)
	  for (int b = 4; b < 940; b++)
	    for (int a = 1; a < 310; a++)
	    {
	      
	      D[a][b][c]=B[a][b][c]+D[a][b][c]/E[a][b]*4;
	      C[a]=B[a-1][b-4][c-1]-C[a]+49;
	    }

    return 0;
}