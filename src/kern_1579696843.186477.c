#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(630, 810, "ones");
	int **C = create_two_dim_int(850, 220, "ones");
	int *D = create_one_dim_int(30, "ones");
	int *A = create_one_dim_int(270, "ones");
	int ***B = create_three_dim_int(950, 510, 980, "ones");

	for (int c = 3; c < 976; c++)
	  for (int b = 4; b < 216; b++)
	    for (int a = 4; a < 268; a++)
	    {
	      
	      A[a]=A[a+2]-1;
	      
	      C[a][b]=C[a+5][b+4]/21;
	      
	      B[a][b][c]=B[a+2][b+2][c+2]/41;
	      
	      B[a][b][c]=B[a+2][b+4][c+4]/C[a][b]*A[a];
	      
	      E[a][b]=E[a+1][b+4]+B[a][b][c]*D[a];
	      
	      A[a]=E[a][b]-B[a][b][c];
	      
	      C[a][b]=B[a][b][c]+D[a]/A[a]-E[a][b];
	      E[a][b]=B[a-4][b-4][c-3]-A[a]*E[a][b];
	    }

    return 0;
}