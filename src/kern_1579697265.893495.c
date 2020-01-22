#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(600, 300, 340, "random");
	float ***A = create_three_dim_float(220, 270, 300, "random");
	float **B = create_two_dim_float(670, 300, "random");

	for (int c = 5; c < 299; c++)
	  for (int b = 4; b < 270; b++)
	    for (int a = 5; a < 218; a++)
	    {
	      
	      B[a][b]=B[a][b-2]-A[a][b][c];
	      
	      C[a][b][c]=C[a-1][b-4][c-4]-0.118;
	      
	      C[a][b][c]=C[a+5][b+5][c+4]*0.791;
	      
	      B[a][b]=0.04;
	      
	      B[a][b]=C[a][b][c]-A[a][b][c]*B[a][b];
	      A[a][b][c]=C[a-5][b-1][c-2]+B[a][b]*A[a][b][c];
	      
	      float var_a=A[a][b][c]*0.995;
	      float var_b=A[a+2][b][c+1]*0.566;
	    }

    return 0;
}