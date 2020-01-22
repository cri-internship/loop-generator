#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(1000, 920, "zeros");
	float ***C = create_three_dim_float(910, 110, 530, "zeros");
	float **A = create_two_dim_float(730, 470, "zeros");
	float ***B = create_three_dim_float(270, 220, 590, "zeros");

	for (int c = 5; c < 526; c++)
	  for (int b = 2; b < 105; b++)
	    for (int a = 1; a < 269; a++)
	    {
	      
	      A[a][b]=A[a][b-1]*0.128;
	      
	      B[a][b][c]=B[a+1][b+5][c+1]+0.358;
	      
	      C[a][b][c]=C[a+1][b+5][c+4]+0.527;
	      
	      B[a][b][c]=D[a][b];
	      
	      float var_a=A[a][b]+0.381;
	      float var_b=A[a][b+3]*0.486;
	      
	      B[a][b][c]=A[a][b]*0.033;
	      D[a][b]=A[a][b+1]*D[a][b]/B[a][b][c]-C[a][b][c];
	      
	      C[a][b][c]=C[a][b][c]+A[a][b]/D[a][b]-B[a][b][c];
	      A[a][b]=C[a+5][b+1][c+4]+D[a][b];
	    }

    return 0;
}