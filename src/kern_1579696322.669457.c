#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(290, 710, 460, "random");
	float **C = create_two_dim_float(280, 280, "random");
	float ***B = create_three_dim_float(20, 990, 590, "random");
	float ***A = create_three_dim_float(710, 300, 810, "random");

	for (int c = 5; c < 460; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 3; a < 277; a++)
	    {
	      
	      D[a][b][c]=D[a][b][c-2]+0.463;
	      
	      A[a][b][c]=A[a-3][b][c-2]-0.603;
	      
	      A[a][b][c]=A[a][b+4][c+4]/0.996;
	      
	      D[a][b][c]=B[a][b][c];
	      
	      C[a][b]=0.078+A[a][b][c];
	      C[a][b]=0.993;
	      
	      D[a][b][c]=D[a][b][c]-0.958/A[a][b][c]*B[a][b][c];
	      A[a][b][c]=D[a][b-5][c-5]*B[a][b][c]-C[a][b]+A[a][b][c];
	      
	      B[a][b][c]=C[a][b]-0.748*A[a][b][c]+B[a][b][c];
	      C[a][b]=C[a+3][b]+B[a][b][c];
	    }

    return 0;
}