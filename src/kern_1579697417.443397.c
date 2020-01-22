#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(390, 590, 390, "random");
	float ***B = create_three_dim_float(890, 250, 280, "random");
	float **E = create_two_dim_float(460, 980, "random");
	float ***A = create_three_dim_float(960, 610, 400, "random");
	float ***D = create_three_dim_float(770, 120, 610, "random");

	for (int d = 0; d < 276; d++)
	  for (int c = 3; c < 120; c++)
	    for (int b = 3; b < 770; b++)
	      for (int a = 3; a < 770; a++)
	      {
	        
	       A[a][b][c]=A[a+4][b+3][c+2]+C[a][b][c]/D[a][b][c]*B[a][b][c];
	        
	       D[a][b][c]=E[a][b]+A[a][b][c]*0.29;
	       D[a-3][b-3][c]=A[a][b][c]/C[a][b][c]+E[a][b];
	        
	       float var_a=B[a][b][c]+0.728;
	       float var_b=B[a+1][b+2][c+4]-0.277;
	        
	       C[a][b][c]=B[a][b][c]/E[a][b]*A[a][b][c];
	       B[a][b][c]=B[a+1][b+5][c+1]*A[a][b][c];
	      }

    return 0;
}