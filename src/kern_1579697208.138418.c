#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(1000, 710, 360, "ones");
	int **E = create_two_dim_int(940, 410, "ones");
	int ***B = create_three_dim_int(440, 820, 330, "ones");
	int *D = create_one_dim_int(760, "ones");
	int *A = create_one_dim_int(770, "ones");

	for (int c = 1; c < 330; c++)
	  for (int b = 1; b < 406; b++)
	    for (int a = 5; a < 440; a++)
	    {
	      
	      E[a][b]=E[a+3][b+1]+4;
	      
	      A[a]=E[a][b]/42-B[a][b][c];
	      A[a-5]=C[a][b][c]-B[a][b][c]/C[a][b][c];
	      
	      E[a][b]=A[a]/D[a];
	      
	      D[a]=E[a][b]/B[a][b][c];
	      D[a]=B[a][b][c]+A[a]/C[a][b][c]-E[a][b];
	      
	      A[a]=48;
	      
	      B[a][b][c]=C[a][b][c]/E[a][b]+B[a][b][c]*D[a]-A[a];
	      E[a][b]=C[a+1][b+3][c+1]/B[a][b][c]-D[a];
	      
	      A[a]=B[a][b][c]-E[a][b]*D[a];
	      C[a][b][c]=B[a-4][b-1][c-1]-C[a][b][c]/D[a]*E[a][b]+A[a];
	    }

    return 0;
}