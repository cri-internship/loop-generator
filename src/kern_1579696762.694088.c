#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(520, 340, 840, "ones");
	float **D = create_two_dim_float(140, 680, "ones");
	float ***B = create_three_dim_float(20, 70, 400, "ones");
	float **C = create_two_dim_float(910, 750, "ones");

	for (int d = 5; d < 400; d++)
	  for (int c = 5; c < 70; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-4][c-2]*B[a][b][c];
	        
	       A[a][b][c]=A[a-4][b-3][c-2]-0.962;
	        
	       B[a][b][c]=B[a][b-5][c-2]/C[a][b]-A[a][b][c];
	        
	       B[a][b][c]=B[a-1][b-2][c-5]/D[a][b]+C[a][b]*0.842;
	        
	       D[a][b]=D[a+5][b]-C[a][b]/B[a][b][c];
	      }

    return 0;
}