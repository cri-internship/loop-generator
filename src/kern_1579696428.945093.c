#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(430, 60, 760, "random");
	float *B = create_one_dim_float(630, "random");
	float ***C = create_three_dim_float(510, 820, 220, "random");

	for (int c = 1; c < 217; c++)
	  for (int b = 2; b < 58; b++)
	    for (int a = 5; a < 425; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c-1]*A[a][b][c]/B[a];
	      
	      A[a][b][c]=A[a+3][b+2][c+5]-0.592;
	      
	      C[a][b][c]=B[a]*0.854;
	      B[a]=A[a][b][c]+C[a][b][c];
	      
	      A[a][b][c]=0.989;
	      
	      A[a][b][c]=C[a][b][c]-B[a];
	      B[a]=C[a+3][b+5][c+3]-B[a]*A[a][b][c];
	    }

    return 0;
}