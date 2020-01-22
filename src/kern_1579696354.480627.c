#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(340, "zeros");
	double *A = create_one_dim_double(30, "zeros");
	double ***D = create_three_dim_double(480, 240, 970, "zeros");
	double ***B = create_three_dim_double(610, 110, 740, "zeros");

	for (int c = 3; c < 737; c++)
	  for (int b = 5; b < 107; b++)
	    for (int a = 3; a < 26; a++)
	    {
	      
	      B[a][b][c]=B[a][b-5][c-3]*0.128;
	      
	      D[a][b][c]=D[a-2][b][c-2]/C[a]*A[a]-B[a][b][c];
	      
	      A[a]=A[a-3]*D[a][b][c];
	      
	      A[a]=A[a+4]-0.831;
	      
	      D[a][b][c]=D[a+1][b+2][c+1]-B[a][b][c];
	      
	      B[a][b][c]=B[a+2][b+3][c+3]-A[a]/C[a];
	      
	      double var_a=C[a]-0.718;
	      double var_b=C[a+3]-0.277;
	    }

    return 0;
}