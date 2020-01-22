#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(860, 440, 180, "random");
	float ***B = create_three_dim_float(500, 470, 650, "random");
	float ***C = create_three_dim_float(100, 220, 260, "random");

	for (int c = 2; c < 175; c++)
	  for (int b = 0; b < 217; b++)
	    for (int a = 1; a < 98; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b][c-2]*C[a][b][c];
	      
	      A[a][b][c]=A[a+2][b+2][c+5]+0.802;
	      
	      B[a][b][c]=B[a+2][b+5][c+5]*0.071;
	      
	      C[a][b][c]=C[a+2][b+3][c+4]*B[a][b][c]+A[a][b][c];
	      
	      float var_a=C[a][b][c]/0.208;
	      float var_b=C[a+1][b+1][c+5]+0.483;
	    }

    return 0;
}