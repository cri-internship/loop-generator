#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(910, 500, 1000, "zeros");
	int **E = create_two_dim_int(320, 870, "zeros");
	int *C = create_one_dim_int(470, "zeros");
	int ***B = create_three_dim_int(340, 660, 890, "zeros");
	int *A = create_one_dim_int(790, "zeros");

	for (int c = 5; c < 890; c++)
	  for (int b = 3; b < 496; b++)
	    for (int a = 5; a < 340; a++)
	    {
	      
	      C[a]=C[a-3]*B[a][b][c]/E[a][b]+D[a][b][c];
	      
	      B[a][b][c]=B[a-5][b-3][c-5]/A[a];
	      
	      D[a][b][c]=D[a+4][b+4][c+2]/37;
	      
	      D[a][b][c]=33*B[a][b][c];
	      
	      int var_a=D[a][b][c]+13;
	      int var_b=D[a+5][b+4][c+4]*48;
	      
	      C[a]=B[a][b][c]*C[a]-D[a][b][c]+A[a]/E[a][b];
	      E[a][b]=B[a-3][b-2][c]+D[a][b][c]-A[a];
	    }

    return 0;
}