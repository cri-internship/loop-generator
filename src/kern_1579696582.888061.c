#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(510, 170, "random");
	float ***D = create_three_dim_float(430, 910, 740, "random");
	float **C = create_two_dim_float(870, 880, "random");
	float **E = create_two_dim_float(310, 980, "random");
	float **A = create_two_dim_float(50, 100, "random");

	for (int d = 0; d < 735; d++)
	  for (int c = 5; c < 99; c++)
	    for (int b = 4; b < 48; b++)
	      for (int a = 4; a < 48; a++)
	      {
	        
	       B[a][b]=B[a-4][b-5]*0.093;
	        
	       A[a][b]=A[a+2][b+1]+0.375;
	        
	       E[a][b]=E[a][b+5]-D[a][b][c]/B[a][b]*C[a][b]+A[a][b];
	        
	       D[a][b][c]=E[a][b]-E[a][b]*B[a][b]/A[a][b];
	       D[a][b+4][c+5]=C[a][b]/E[a][b]+B[a][b];
	        
	       float var_a=B[a][b]*0.851;
	       float var_b=B[a+4][b+2]-0.064;
	      }

    return 0;
}