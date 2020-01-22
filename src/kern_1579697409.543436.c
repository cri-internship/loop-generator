#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(970, 120, 960, "random");
	int **C = create_two_dim_int(300, 460, "random");
	int ***B = create_three_dim_int(750, 740, 200, "random");
	int **A = create_two_dim_int(220, 830, "random");

	for (int c = 4; c < 200; c++)
	  for (int b = 1; b < 116; b++)
	    for (int a = 4; a < 300; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b][c+4]-A[a][b]/31+C[a][b];
	      
	      D[a][b][c]=41;
	      
	      int var_a=B[a][b][c]-7;
	      int var_b=B[a-2][b-1][c-4]*14;
	      
	      B[a][b][c]=C[a][b]+D[a][b][c]/A[a][b]*D[a][b][c];
	      C[a][b]=C[a-4][b]+B[a][b][c];
	    }

    return 0;
}