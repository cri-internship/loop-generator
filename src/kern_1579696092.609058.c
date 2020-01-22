#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(140, 870, 80, "random");
	float ***E = create_three_dim_float(880, 330, 940, "random");
	float *D = create_one_dim_float(850, "random");
	float ***B = create_three_dim_float(860, 830, 630, "random");
	float ***C = create_three_dim_float(640, 100, 40, "random");

	for (int d = 4; d < 40; d++)
	  for (int c = 4; c < 100; c++)
	    for (int b = 5; b < 140; b++)
	      for (int a = 5; a < 140; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b-2][c-3]-E[a][b][c]*B[a][b][c];
	        
	       A[a][b][c]=A[a-3][b-3][c-4]*C[a][b][c]-0.532;
	        
	       B[a][b][c]=B[a][b+4][c+1]+0.891;
	        
	       E[a][b][c]=D[a]*A[a][b][c];
	       D[a]=C[a][b][c]*B[a][b][c]/E[a][b][c];
	        
	       B[a][b][c]=A[a][b][c]/E[a][b][c];
	        
	       A[a][b][c]=0.619;
	      }

    return 0;
}