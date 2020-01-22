#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(390, 730, "zeros");
	float ***B = create_three_dim_float(930, 310, 110, "zeros");
	float ***A = create_three_dim_float(550, 420, 740, "zeros");

	for (int c = 5; c < 106; c++)
	  for (int b = 4; b < 307; b++)
	    for (int a = 4; a < 390; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+4][c+3]-B[a][b][c]*C[a][b];
	      
	      A[a][b][c]=0.034;
	      
	      B[a][b][c]=0.024;
	      B[a-4][b-2][c-3]=0.775;
	      
	      float var_a=C[a][b]*0.087;
	      float var_b=C[a-1][b-3]/0.161;
	      
	      C[a][b]=A[a][b][c]*B[a][b][c]-C[a][b];
	      A[a][b][c]=A[a-2][b-1][c-1]*0.7;
	      
	      B[a][b][c]=B[a][b][c]-A[a][b][c]+C[a][b];
	      C[a][b]=B[a][b+3][c+4]-A[a][b][c]/C[a][b];
	    }

    return 0;
}