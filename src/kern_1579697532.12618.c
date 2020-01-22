#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(750, 490, 150, "random");
	float **C = create_two_dim_float(800, 520, "random");
	float **B = create_two_dim_float(20, 180, "random");
	float ***D = create_three_dim_float(190, 170, 830, "random");

	for (int c = 0; c < 146; c++)
	  for (int b = 4; b < 166; b++)
	    for (int a = 1; a < 188; a++)
	    {
	      
	      D[a][b][c]=D[a+2][b+4][c+3]+A[a][b][c]*C[a][b];
	      
	      A[a][b][c]=A[a+5][b+2][c+4]/D[a][b][c];
	      
	      C[a][b]=B[a][b]+D[a][b][c];
	      C[a-1][b-4]=0.584+B[a][b]*D[a][b][c];
	      
	      C[a][b]=0.165;
	    }

    return 0;
}