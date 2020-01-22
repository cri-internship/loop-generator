#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(980, "zeros");
	int **A = create_two_dim_int(230, 120, "zeros");
	int *D = create_one_dim_int(710, "zeros");
	int **E = create_two_dim_int(780, 940, "zeros");
	int ***C = create_three_dim_int(930, 710, 730, "zeros");

	for (int c = 0; c < 726; c++)
	  for (int b = 0; b < 708; b++)
	    for (int a = 3; a < 710; a++)
	    {
	      
	      C[a][b][c]=1;
	      C[a+2][b+2][c+4]=11;
	      
	      B[a]=0;
	      B[a-3]=32;
	      
	      A[a][b]=C[a][b][c]*D[a]+B[a]/A[a][b];
	      D[a]=C[a][b+1][c+1]/E[a][b];
	      
	      B[a]=D[a]-C[a][b][c]/B[a]*C[a][b][c]+37;
	    }

    return 0;
}