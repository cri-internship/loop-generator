#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(180, 160, 780, "random");
	float ***B = create_three_dim_float(470, 840, 610, "random");
	float *C = create_one_dim_float(830, "random");
	float ***A = create_three_dim_float(380, 80, 420, "random");

	for (int c = 2; c < 420; c++)
	  for (int b = 3; b < 80; b++)
	    for (int a = 4; a < 380; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-2][c-2]*D[a][b][c]-A[a][b][c];
	      
	      C[a]=0.479;
	      float  var_a=C[a]-0.939;
	      
	      A[a][b][c]=A[a-3][b-3][c-2]-C[a]+B[a][b][c]/D[a][b][c];
	      
	      C[a]=0.023;
	      
	      float var_b=A[a][b][c]+0.644;
	      float var_c=A[a-3][b][c-2]*0.123;
	      
	      float var_d=C[a]*0.722;
	    }

    return 0;
}