#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(70, 600, 350, "zeros");
	float **B = create_two_dim_float(790, 30, "zeros");
	float ***E = create_three_dim_float(160, 680, 840, "zeros");
	float ***D = create_three_dim_float(990, 270, 530, "zeros");
	float ***A = create_three_dim_float(860, 950, 430, "zeros");

	for (int c = 3; c < 528; c++)
	  for (int b = 3; b < 267; b++)
	    for (int a = 2; a < 160; a++)
	    {
	      
	      D[a][b][c]=A[a][b][c]*E[a][b][c]-B[a][b]+C[a][b][c];
	      D[a+2][b+3][c+2]=C[a][b][c]*E[a][b][c]/B[a][b];
	      
	      E[a][b][c]=D[a][b][c];
	      E[a][b-3][c-2]=B[a][b]*A[a][b][c]-C[a][b][c]/D[a][b][c];
	      
	      float var_a=D[a][b][c]*0.876;
	      float var_b=D[a-2][b-2][c-3]/0.774;
	    }

    return 0;
}