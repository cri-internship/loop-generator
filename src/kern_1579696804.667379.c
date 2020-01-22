#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(280, 430, "random");
	int *C = create_one_dim_int(110, "random");
	int ***A = create_three_dim_int(330, 630, 910, "random");
	int ***D = create_three_dim_int(430, 880, 560, "random");

	for (int c = 0; c < 560; c++)
	  for (int b = 3; b < 429; b++)
	    for (int a = 2; a < 105; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]/C[a];
	      
	      C[a]=C[a+5]-4;
	      
	      B[a][b]=B[a+4][b+1]*D[a][b][c]-A[a][b][c]+C[a];
	      
	      C[a]=34;
	      
	      D[a][b][c]=D[a][b][c]/B[a][b];
	      B[a][b]=D[a+2][b+5][c]+A[a][b][c];
	    }

    return 0;
}