#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(820, "ones");
	int **A = create_two_dim_int(930, 270, "ones");
	int **B = create_two_dim_int(770, 170, "ones");
	int ***C = create_three_dim_int(470, 790, 700, "ones");

	for (int c = 0; c < 169; c++)
	  for (int b = 0; b < 765; b++)
	    for (int a = 0; a < 765; a++)
	    {
	      
	      B[a][b]=B[a+5][b+1]-A[a][b]+D[a]*C[a][b][c];
	    }

    return 0;
}