#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(370, 840, 290, "zeros");
	float ***B = create_three_dim_float(310, 190, 540, "zeros");
	float ***A = create_three_dim_float(770, 860, 20, "zeros");
	float *C = create_one_dim_float(80, "zeros");
	float **E = create_two_dim_float(560, 370, "zeros");

	for (int c = 3; c < 17; c++)
	  for (int b = 5; b < 370; b++)
	    for (int a = 5; a < 75; a++)
	    {
	      
	      E[a][b]=E[a-3][b-5]+0.29;
	      
	      A[a][b][c]=A[a+3][b][c+3]*B[a][b][c];
	      
	      C[a]=C[a+5]*D[a][b][c]-E[a][b];
	      
	      A[a][b][c]=0.678;
	      
	      float var_a=D[a][b][c]*0.349;
	      float var_b=D[a-5][b-4][c-2]+0.163;
	      
	      C[a]=E[a][b]*C[a];
	      E[a][b]=E[a-1][b-1]*A[a][b][c];
	    }

    return 0;
}