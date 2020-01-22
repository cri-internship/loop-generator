#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(770, 130, 990, "ones");
	float ***B = create_three_dim_float(580, 610, 270, "ones");
	float *C = create_one_dim_float(150, "ones");
	float ***E = create_three_dim_float(720, 770, 550, "ones");
	float **A = create_two_dim_float(870, 930, "ones");

	for (int c = 1; c < 267; c++)
	  for (int b = 4; b < 126; b++)
	    for (int a = 1; a < 150; a++)
	    {
	      
	      C[a]=A[a][b]*B[a][b][c]+D[a][b][c];
	      B[a][b][c]=C[a]-E[a][b][c];
	      
	      D[a][b][c]=D[a+4][b][c+1]/C[a];
	      
	      D[a][b][c]=D[a+4][b+4][c+4]+E[a][b][c]/B[a][b][c]-C[a]*A[a][b];
	      
	      E[a][b][c]=C[a]/D[a][b][c]-A[a][b]*B[a][b][c];
	      E[a-1][b-4][c-1]=B[a][b][c];
	      
	      B[a][b][c]=0.799;
	    }

    return 0;
}