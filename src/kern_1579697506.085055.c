#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(320, 370, 120, "ones");
	float ***A = create_three_dim_float(150, 420, 90, "ones");
	float ***E = create_three_dim_float(110, 950, 110, "ones");
	float *C = create_one_dim_float(830, "ones");
	float ***D = create_three_dim_float(850, 130, 450, "ones");

	for (int c = 2; c < 85; c++)
	  for (int b = 5; b < 417; b++)
	    for (int a = 3; a < 109; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+1][c+5]/0.703;
	      
	      A[a][b][c]=A[a][b+3][c+4]/E[a][b][c]*D[a][b][c];
	      
	      E[a][b][c]=E[a][b+5][c]*0.164;
	      
	      C[a]=C[a+3]/A[a][b][c]-B[a][b][c];
	      
	      E[a][b][c]=C[a]/C[a]-A[a][b][c];
	    }

    return 0;
}