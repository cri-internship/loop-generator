#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(110, 840, 330, "zeros");
	double ***A = create_three_dim_double(840, 170, 440, "zeros");
	double ***C = create_three_dim_double(770, 420, 150, "zeros");
	double **D = create_two_dim_double(560, 750, "zeros");

	for (int c = 5; c < 150; c++)
	  for (int b = 4; b < 420; b++)
	    for (int a = 1; a < 107; a++)
	    {
	      
	      C[a][b][c]=C[a][b][c-4]*A[a][b][c]+B[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+2][c+5]+D[a][b];
	      
	      D[a][b]=C[a][b][c]+A[a][b][c]/C[a][b][c];
	      D[a+1][b+5]=B[a][b][c]-C[a][b][c]/A[a][b][c];
	      
	      C[a][b][c]=B[a][b][c]*C[a][b][c]/A[a][b][c];
	      D[a][b]=B[a-1][b-4][c-5]/C[a][b][c]+A[a][b][c]-D[a][b];
	    }

    return 0;
}