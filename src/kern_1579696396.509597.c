#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(850, 330, 850, "ones");
	double *B = create_one_dim_double(210, "ones");
	double *D = create_one_dim_double(170, "ones");
	double **A = create_two_dim_double(920, 30, "ones");

	for (int c = 3; c < 850; c++)
	  for (int b = 5; b < 27; b++)
	    for (int a = 3; a < 167; a++)
	    {
	      
	      D[a]=D[a-2]-C[a][b][c]*A[a][b]/0.496;
	      
	      A[a][b]=A[a-3][b-5]-0.563;
	      
	      C[a][b][c]=C[a-2][b-1][c-3]*0.295;
	      
	      D[a]=D[a+3]*0.212;
	      
	      C[a][b][c]=C[a+4][b+2][c]*0.845;
	      
	      A[a][b]=0.938;
	      
	      B[a]=A[a][b]/D[a];
	      C[a][b][c]=A[a-2][b-2]+C[a][b][c];
	    }

    return 0;
}