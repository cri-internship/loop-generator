#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(790, 880, 270, "ones");
	double ***B = create_three_dim_double(70, 330, 50, "ones");
	double **A = create_two_dim_double(680, 690, "ones");
	double **C = create_two_dim_double(380, 830, "ones");

	for (int c = 0; c < 269; c++)
	  for (int b = 0; b < 685; b++)
	    for (int a = 0; a < 380; a++)
	    {
	      
	      C[a][b]=C[a][b+4]*0.202;
	      
	      A[a][b]=A[a+2][b+5]+B[a][b][c];
	      
	      D[a][b][c]=0.722;
	      D[a+2][b+3][c+1]=0.236;
	      
	      B[a][b][c]=D[a][b][c]+A[a][b];
	      A[a][b]=D[a+1][b+4][c+1]/C[a][b]+C[a][b]*A[a][b];
	    }

    return 0;
}