#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(880, 180, 810, "random");
	double ***D = create_three_dim_double(630, 110, 730, "random");
	double ***B = create_three_dim_double(700, 770, 440, "random");
	double *C = create_one_dim_double(420, "random");

	for (int d = 0; d < 435; d++)
	  for (int c = 3; c < 176; c++)
	    for (int b = 5; b < 416; b++)
	      for (int a = 5; a < 416; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-3][c]-0.861;
	        
	       B[a][b][c]=B[a][b+5][c+5]-0.034;
	        
	       C[a]=0.868;
	       C[a-4]=0.036;
	        
	       A[a][b][c]=0.249;
	       A[a+2][b+2][c+5]=0.182;
	        
	       A[a][b][c]=0.817;
	        
	       D[a][b][c]=C[a]*D[a][b][c]/B[a][b][c];
	       A[a][b][c]=C[a+4]-B[a][b][c]*0.34/D[a][b][c];
	      }

    return 0;
}