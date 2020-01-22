#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(680, 30, 40, "zeros");
	double ***A = create_three_dim_double(590, 410, 610, "zeros");
	double **C = create_two_dim_double(860, 900, "zeros");

	for (int c = 0; c < 35; c++)
	  for (int b = 1; b < 25; b++)
	    for (int a = 1; a < 590; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-1][c]*0.502;
	      
	      A[a][b][c]=A[a][b+2][c+4]*0.141;
	      
	      C[a][b]=C[a+3][b+2]-0.229;
	      
	      B[a][b][c]=B[a+4][b+5][c+3]+0.689;
	      
	      B[a][b][c]=C[a][b]/B[a][b][c]*A[a][b][c];
	      C[a][b]=C[a][b+3]/B[a][b][c]*A[a][b][c];
	      
	      A[a][b][c]=B[a][b][c]-C[a][b];
	      A[a][b][c]=B[a+4][b+4][c+5]+A[a][b][c]-C[a][b];
	    }

    return 0;
}