#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(630, 880, 220, "ones");
	float ***C = create_three_dim_float(700, 680, 700, "ones");
	float ***D = create_three_dim_float(540, 510, 690, "ones");
	float ***B = create_three_dim_float(440, 360, 580, "ones");

	for (int c = 5; c < 216; c++)
	  for (int b = 3; b < 358; b++)
	    for (int a = 5; a < 435; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b][c-2]*0.871;
	      
	      D[a][b][c]=D[a][b-3][c-2]*0.554;
	      
	      D[a][b][c]=D[a+1][b+2][c+4]*C[a][b][c]-B[a][b][c];
	      
	      A[a][b][c]=D[a][b][c]/D[a][b][c];
	      A[a-5][b][c-5]=C[a][b][c]+D[a][b][c];
	      
	      float var_a=A[a][b][c]+0.531;
	      float var_b=A[a+4][b][c+4]*0.915;
	      
	      A[a][b][c]=B[a][b][c]-0.084/A[a][b][c];
	      B[a][b][c]=B[a+5][b+2][c+4]/A[a][b][c]-0.788;
	    }

    return 0;
}