#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 720, "zeros");
	double ***C = create_three_dim_double(910, 930, 730, "zeros");
	double **A = create_two_dim_double(660, 760, "zeros");

	for (int c = 2; c < 730; c++)
	  for (int b = 4; b < 718; b++)
	    for (int a = 5; a < 658; a++)
	    {
	      
	      C[a][b][c]=C[a][b][c-2]-0.192;
	      
	      A[a][b]=A[a-2][b-1]-0.465;
	      
	      A[a][b]=A[a+2][b+1]+0.587;
	      
	      B[a][b]=A[a][b]*C[a][b][c];
	      B[a+2][b+2]=0.798;
	      
	      B[a][b]=B[a][b]+C[a][b][c];
	      C[a][b][c]=B[a-2][b-4]+A[a][b];
	      
	      double var_a=B[a][b]*0.212;
	      double var_b=B[a][b-3]+0.433;
	      
	      A[a][b]=A[a][b]-B[a][b]/C[a][b][c];
	      C[a][b][c]=A[a-5][b-4]*C[a][b][c]+B[a][b];
	    }

    return 0;
}