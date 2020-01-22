#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(800, 400, "ones");
	float ***B = create_three_dim_float(20, 280, 210, "ones");
	float ***C = create_three_dim_float(780, 80, 440, "ones");
	float **D = create_two_dim_float(470, 20, "ones");

	for (int d = 4; d < 210; d++)
	  for (int c = 5; c < 20; c++)
	    for (int b = 3; b < 17; b++)
	      for (int a = 3; a < 17; a++)
	      {
	        
	       A[a][b]=A[a-3][b-3]-D[a][b]*C[a][b][c];
	        
	       B[a][b][c]=B[a-1][b][c-4]-A[a][b]/D[a][b]*C[a][b][c];
	        
	       A[a][b]=A[a-2][b-5]-0.917;
	        
	       A[a][b]=A[a+5][b+5]-0.103;
	        
	       A[a][b]=A[a+5][b+2]+B[a][b][c]-C[a][b][c]*D[a][b];
	        
	       B[a][b][c]=A[a][b]/D[a][b];
	        
	       D[a][b]=0.905/A[a][b]*B[a][b][c];
	       D[a-2][b-3]=C[a][b][c]*B[a][b][c]+A[a][b];
	      }

    return 0;
}