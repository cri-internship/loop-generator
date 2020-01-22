#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(590, 380, 560, "zeros");
	double ***C = create_three_dim_double(370, 440, 680, "zeros");
	double **A = create_two_dim_double(910, 570, "zeros");

	for (int c = 5; c < 558; c++)
	  for (int b = 4; b < 376; b++)
	    for (int a = 5; a < 370; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-3][c-2]-A[a][b]*0.451;
	      
	      C[a][b][c]=C[a][b][c+2]-0.879;
	      
	      B[a][b][c]=B[a+3][b+4][c+2]/0.799;
	      
	      A[a][b]=0.669;
	      A[a+3][b]=0.149;
	      
	      C[a][b][c]=C[a][b][c]/B[a][b][c]*A[a][b];
	      A[a][b]=C[a-4][b-4][c-5]*A[a][b];
	      
	      double var_a=A[a][b]+0.692;
	      double var_b=A[a-5][b-2]*0.725;
	    }

    return 0;
}