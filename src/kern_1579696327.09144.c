#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(230, 150, "ones");
	int *B = create_one_dim_int(240, "ones");
	int ***C = create_three_dim_int(950, 130, 850, "ones");
	int *E = create_one_dim_int(850, "ones");
	int **D = create_two_dim_int(310, 670, "ones");

	for (int c = 0; c < 848; c++)
	  for (int b = 5; b < 127; b++)
	    for (int a = 3; a < 230; a++)
	    {
	      
	      B[a]=B[a+3]-C[a][b][c]*A[a][b];
	      
	      A[a][b]=D[a][b]*E[a]/B[a]+C[a][b][c];
	      A[a-1][b-1]=B[a];
	      
	      C[a][b][c]=23;
	      C[a][b+3][c+2]=0;
	      
	      E[a]=D[a][b]/B[a]*E[a];
	      D[a][b]=D[a-3][b-5]/B[a];
	    }

    return 0;
}