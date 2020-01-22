#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(640, 280, 220, "random");
	int ***D = create_three_dim_int(410, 780, 410, "random");
	int **A = create_two_dim_int(810, 870, "random");
	int **C = create_two_dim_int(60, 810, "random");
	int *E = create_one_dim_int(230, "random");

	for (int c = 0; c < 220; c++)
	  for (int b = 4; b < 275; b++)
	    for (int a = 4; a < 56; a++)
	    {
	      
	      A[a][b]=A[a-4][b-4]*48;
	      
	      B[a][b][c]=B[a+1][b+5][c]/28;
	      
	      D[a][b][c]=D[a][b+5][c+1]+37-B[a][b][c];
	      
	      C[a][b]=E[a]*D[a][b][c]/A[a][b];
	      C[a+4][b+5]=10-A[a][b]*E[a]/B[a][b][c];
	    }

    return 0;
}