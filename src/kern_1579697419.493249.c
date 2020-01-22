#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(170, "ones");
	int *C = create_one_dim_int(80, "ones");
	int **D = create_two_dim_int(390, 630, "ones");
	int *A = create_one_dim_int(80, "ones");
	int ***E = create_three_dim_int(730, 440, 150, "ones");

	for (int c = 1; c < 150; c++)
	  for (int b = 4; b < 440; b++)
	    for (int a = 5; a < 75; a++)
	    {
	      
	      E[a][b][c]=E[a-5][b-4][c-1]*24;
	      
	      C[a]=A[a]*B[a];
	      C[a+5]=D[a][b]+E[a][b][c]/D[a][b]*A[a];
	    }

    return 0;
}