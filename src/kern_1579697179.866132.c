#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(300, 480, 20, "random");
	int ***D = create_three_dim_int(690, 360, 170, "random");
	int **A = create_two_dim_int(300, 520, "random");
	int *C = create_one_dim_int(130, "random");

	for (int c = 0; c < 167; c++)
	  for (int b = 0; b < 357; b++)
	    for (int a = 0; a < 685; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b][c+3]+C[a]/A[a][b];
	      
	      C[a]=D[a][b][c]-B[a][b][c]*C[a];
	      B[a][b][c]=D[a+4][b+3][c+2]/A[a][b];
	    }

    return 0;
}