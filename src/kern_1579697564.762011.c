#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(810, 600, 560, "random");
	int **D = create_two_dim_int(740, 190, "random");
	int ***E = create_three_dim_int(230, 740, 270, "random");
	int *B = create_one_dim_int(790, "random");
	int *A = create_one_dim_int(220, "random");

	for (int c = 3; c < 270; c++)
	  for (int b = 5; b < 190; b++)
	    for (int a = 4; a < 215; a++)
	    {
	      
	      E[a][b][c]=E[a][b-5][c-3]/B[a]+C[a][b][c];
	      
	      D[a][b]=B[a]+E[a][b][c];
	      B[a]=A[a]+D[a][b]*21/D[a][b];
	      
	      A[a]=A[a+5]+D[a][b]*B[a];
	      
	      D[a][b]=E[a][b][c]/C[a][b][c]*B[a]-A[a];
	      
	      A[a]=E[a][b][c]*B[a]/D[a][b];
	    }

    return 0;
}