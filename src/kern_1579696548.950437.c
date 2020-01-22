#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(180, 510, "random");
	float **A = create_two_dim_float(840, 780, "random");
	float ***B = create_three_dim_float(10, 710, 840, "random");
	float ***E = create_three_dim_float(600, 70, 380, "random");
	float ***D = create_three_dim_float(550, 670, 690, "random");

	for (int c = 3; c < 380; c++)
	  for (int b = 5; b < 70; b++)
	    for (int a = 4; a < 10; a++)
	    {
	      
	      A[a][b]=A[a-3][b-5]+E[a][b][c]/0.583*C[a][b]-B[a][b][c];
	      
	      E[a][b][c]=E[a-2][b-4][c-3]/0.955;
	      
	      E[a][b][c]=E[a-4][b-3][c]*0.205/A[a][b]+B[a][b][c];
	      
	      B[a][b][c]=B[a-3][b][c-3]/0.482;
	      
	      C[a][b]=C[a+2][b+1]*0.214;
	      
	      float var_a=C[a][b]*0.756;
	      float var_b=C[a+4][b+5]/0.197;
	      
	      B[a][b][c]=E[a][b][c]*A[a][b]+C[a][b]-D[a][b][c];
	      E[a][b][c]=E[a-3][b][c-2]+B[a][b][c];
	    }

    return 0;
}