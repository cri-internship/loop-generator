#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(750, 570, "zeros");
	float ***C = create_three_dim_float(480, 740, 270, "zeros");
	float ***B = create_three_dim_float(460, 830, 520, "zeros");

	for (int c = 1; c < 267; c++)
	  for (int b = 1; b < 568; b++)
	    for (int a = 4; a < 458; a++)
	    {
	      
	      float var_a=C[a][b][c]*0.323;
	      float var_b=C[a][b+5][c+3]-0.527;
	      
	      B[a][b][c]=B[a][b][c]*A[a][b];
	      C[a][b][c]=B[a-4][b-1][c-1]*C[a][b][c];
	      
	      float var_c=B[a][b][c]-0.153;
	      float var_d=B[a+2][b+3][c+4]/0.516;
	      
	      A[a][b]=A[a][b]+0.936;
	      A[a][b]=A[a+1][b+2]+0.181;
	    }

    return 0;
}