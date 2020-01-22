#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(510, 560, 470, "ones");
	int ***C = create_three_dim_int(100, 980, 500, "ones");
	int *A = create_one_dim_int(580, "ones");
	int **E = create_two_dim_int(610, 300, "ones");
	int ***D = create_three_dim_int(130, 570, 380, "ones");

	for (int c = 4; c < 377; c++)
	  for (int b = 3; b < 300; b++)
	    for (int a = 1; a < 127; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-3][c-4]*42;
	      
	      A[a]=D[a][b][c]-E[a][b]*C[a][b][c]/B[a][b][c];
	      A[a]=C[a][b][c]+D[a][b][c]-E[a][b]*B[a][b][c];
	      
	      D[a][b][c]=17;
	      D[a][b-2][c]=4;
	      
	      D[a][b][c]=E[a][b]+A[a]/A[a]-D[a][b][c]*B[a][b][c];
	      E[a][b]=E[a+5][b]+D[a][b][c]*C[a][b][c];
	      
	      B[a][b][c]=E[a][b]-C[a][b][c]+A[a]*B[a][b][c];
	      A[a]=E[a+4][b]/D[a][b][c]+C[a][b][c]*A[a];
	      
	      int var_a=D[a][b][c]-49;
	      int var_b=D[a+3][b+1][c+3]*38;
	    }

    return 0;
}