#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(180, 320, "zeros");
	double ***A = create_three_dim_double(300, 450, 470, "zeros");

	for (int c = 5; c < 470; c++)
	  for (int b = 3; b < 315; b++)
	    for (int a = 3; a < 176; a++)
	    {
	      
	      B[a][b]=B[a+4][b+5]-0.763;
	      
	      B[a][b]=0.179;
	      
	      A[a][b][c]=0.346;
	      A[a-1][b-3][c-1]=0.161;
	      
	      double var_a=A[a][b][c]-0.191;
	      double var_b=A[a-3][b][c-5]*0.358;
	      
	      A[a][b][c]=B[a][b]+A[a][b][c];
	      B[a][b]=B[a-3][b-1]+0.049;
	      
	      double var_c=A[a][b][c]*0.431;
	      double var_d=A[a+1][b+5][c]+0.476;
	    }

    return 0;
}