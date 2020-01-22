#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(20, 320, "random");
	double ***C = create_three_dim_double(920, 400, 630, "random");
	double **A = create_two_dim_double(450, 760, "random");

	for (int d = 0; d < 627; d++)
	  for (int c = 4; c < 318; c++)
	    for (int b = 3; b < 16; b++)
	      for (int a = 3; a < 16; a++)
	      {
	        
	       A[a][b]=A[a-1][b-4]-0.524;
	        
	       A[a][b]=A[a+5][b+1]*0.236;
	        
	       C[a][b][c]=0.296;
	       C[a+1][b+4][c+3]=0.617;
	        
	       B[a][b]=A[a][b]-C[a][b][c];
	       B[a+4][b+2]=A[a][b]-C[a][b][c];
	        
	       A[a][b]=A[a][b]+B[a][b];
	       C[a][b][c]=A[a-3][b-1]/C[a][b][c]*B[a][b];
	        
	       B[a][b]=C[a][b][c]/B[a][b]*A[a][b];
	       C[a][b][c]=C[a+4][b+1][c+2]+A[a][b]-0.529;
	      }

    return 0;
}