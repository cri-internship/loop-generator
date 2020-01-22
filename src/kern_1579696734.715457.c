#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(890, 860, 530, "random");
	float ***C = create_three_dim_float(510, 490, 550, "random");
	float **A = create_two_dim_float(780, 100, "random");

	for (int d = 3; d < 530; d++)
	  for (int c = 4; c < 95; c++)
	    for (int b = 0; b < 506; b++)
	      for (int a = 0; a < 506; a++)
	      {
	        
	       A[a][b]=A[a+4][b+5]-0.603;
	        
	       B[a][b][c]=B[a+3][b+5][c]+C[a][b][c];
	        
	       A[a][b]=A[a+1][b+4]+0.68;
	        
	       C[a][b][c]=0.703;
	       C[a][b-3][c-3]=0.078;
	        
	       float var_a=A[a][b]*0.608;
	       float var_b=A[a][b-4]+0.361;
	        
	       C[a][b][c]=C[a][b][c]-B[a][b][c];
	       A[a][b]=C[a+4][b+5][c+2]+A[a][b];
	        
	       B[a][b][c]=A[a][b]/C[a][b][c];
	       A[a][b]=A[a+4][b]*C[a][b][c];
	      }

    return 0;
}