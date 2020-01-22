#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(180, 390, "zeros");
	int **D = create_two_dim_int(420, 950, "zeros");
	int **A = create_two_dim_int(840, 90, "zeros");
	int ***E = create_three_dim_int(60, 510, 250, "zeros");
	int **B = create_two_dim_int(150, 390, "zeros");

	for (int c = 4; c < 245; c++)
	  for (int b = 2; b < 387; b++)
	    for (int a = 4; a < 56; a++)
	    {
	      
	      C[a][b]=C[a-2][b]-A[a][b]+D[a][b]*B[a][b];
	      
	      E[a][b][c]=E[a+4][b+3][c+5]*7;
	      
	      D[a][b]=D[a][b]/C[a][b]-E[a][b][c]*C[a][b]+E[a][b][c];
	      D[a][b]=B[a][b]*C[a][b]+E[a][b][c];
	      
	      B[a][b]=B[a+1][b+3]*16;
	      
	      B[a][b]=B[a+5][b+2]-E[a][b][c]/D[a][b];
	      
	      E[a][b][c]=A[a][b];
	    }

    return 0;
}