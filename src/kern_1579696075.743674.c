#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(360, 240, 740, "random");
	float ***B = create_three_dim_float(750, 780, 170, "random");
	float ***C = create_three_dim_float(600, 150, 550, "random");
	float **D = create_two_dim_float(470, 880, "random");

	for (int d = 4; d < 170; d++)
	  for (int c = 5; c < 150; c++)
	    for (int b = 4; b < 359; b++)
	      for (int a = 4; a < 359; a++)
	      {
	        
	       D[a][b]=D[a-4][b-5]-0.261;
	        
	       D[a][b]=D[a-1][b-1]-C[a][b][c]+B[a][b][c];
	        
	       B[a][b][c]=D[a][b]+A[a][b][c]-A[a][b][c];
	       B[a-4][b-5][c-1]=A[a][b][c]-C[a][b][c];
	        
	       float var_a=C[a][b][c]+0.149;
	       float var_b=C[a-4][b-4][c-4]+0.621;
	        
	       D[a][b]=A[a][b][c]+B[a][b][c]-C[a][b][c];
	       A[a][b][c]=A[a-4][b-5][c-3]+D[a][b]-B[a][b][c];
	        
	       C[a][b][c]=A[a][b][c]+B[a][b][c];
	       B[a][b][c]=A[a+1][b+2][c+3]+D[a][b]*0.017;
	      }

    return 0;
}