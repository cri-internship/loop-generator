#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(60, 90, 300, "zeros");
	float ***D = create_three_dim_float(530, 40, 540, "zeros");
	float *B = create_one_dim_float(630, "zeros");
	float ***A = create_three_dim_float(700, 260, 420, "zeros");
	float ***C = create_three_dim_float(630, 160, 630, "zeros");

	for (int c = 4; c < 296; c++)
	  for (int b = 3; b < 90; b++)
	    for (int a = 5; a < 59; a++)
	    {
	      
	      B[a]=B[a-4]*0.255;
	      
	      B[a]=B[a-5]/D[a][b][c];
	      
	      C[a][b][c]=C[a-1][b-3][c-4]-A[a][b][c];
	      
	      A[a][b][c]=A[a][b+2][c]*0.413;
	      
	      E[a][b][c]=E[a+1][b][c+4]*C[a][b][c];
	      
	      C[a][b][c]=C[a+2][b+1][c]/E[a][b][c]+B[a]*0.996-A[a][b][c];
	      
	      A[a][b][c]=0.184;
	    }

    return 0;
}