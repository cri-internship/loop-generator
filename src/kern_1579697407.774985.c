#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(840, "zeros");
	int *D = create_one_dim_int(100, "zeros");
	int ***A = create_three_dim_int(500, 390, 960, "zeros");
	int **C = create_two_dim_int(770, 870, "zeros");
	int ***E = create_three_dim_int(70, 260, 720, "zeros");

	for (int c = 2; c < 720; c++)
	  for (int b = 5; b < 260; b++)
	    for (int a = 4; a < 70; a++)
	    {
	      
	      E[a][b][c]=E[a-1][b-3][c-2]+30;
	      
	      E[a][b][c]=E[a-2][b-5][c]-C[a][b]+B[a]/A[a][b][c]*D[a];
	      
	      B[a]=E[a][b][c];
	      B[a+4]=C[a][b];
	      
	      A[a][b][c]=46;
	      A[a][b+5][c+2]=7;
	      
	      A[a][b][c]=27-E[a][b][c];
	      
	      D[a]=B[a]*E[a][b][c]+A[a][b][c]/26-C[a][b];
	      E[a][b][c]=B[a-4]-C[a][b];
	    }

    return 0;
}