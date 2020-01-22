#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(890, "random");
	int ***C = create_three_dim_int(880, 470, 960, "random");
	int **B = create_two_dim_int(660, 370, "random");
	int **D = create_two_dim_int(630, 80, "random");

	for (int c = 0; c < 960; c++)
	  for (int b = 1; b < 80; b++)
	    for (int a = 0; a < 626; a++)
	    {
	      
	      D[a][b]=D[a][b-1]+A[a]*C[a][b][c]-B[a][b];
	      
	      C[a][b][c]=C[a+2][b+5][c]+D[a][b]/A[a];
	      
	      D[a][b]=D[a+4][b]+50;
	      
	      B[a][b]=A[a]-15/D[a][b]+B[a][b];
	      A[a]=4;
	      
	      B[a][b]=41;
	    }

    return 0;
}