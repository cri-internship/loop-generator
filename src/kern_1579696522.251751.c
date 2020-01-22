#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(190, 40, 930, "zeros");
	int **A = create_two_dim_int(810, 700, "zeros");
	int ***D = create_three_dim_int(770, 740, 280, "zeros");
	int *C = create_one_dim_int(910, "zeros");
	int *B = create_one_dim_int(360, "zeros");

	for (int c = 0; c < 275; c++)
	  for (int b = 0; b < 695; b++)
	    for (int a = 1; a < 765; a++)
	    {
	      
	      A[a][b]=A[a][b+4]*C[a];
	      
	      D[a][b][c]=D[a+5][b+3][c+5]/48;
	      
	      C[a]=C[a+4]-D[a][b][c]*B[a]/E[a][b][c]+A[a][b];
	      
	      A[a][b]=E[a][b][c]*B[a];
	      
	      C[a]=A[a][b]/E[a][b][c]*D[a][b][c]+B[a];
	    }

    return 0;
}