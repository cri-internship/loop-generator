#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(680, 970, "random");
	float *E = create_one_dim_float(890, "random");
	float ***A = create_three_dim_float(620, 400, 430, "random");
	float ***D = create_three_dim_float(960, 470, 240, "random");
	float *C = create_one_dim_float(630, "random");

	for (int d = 3; d < 430; d++)
	  for (int c = 2; c < 400; c++)
	    for (int b = 5; b < 620; b++)
	      for (int a = 5; a < 620; a++)
	      {
	        
	       B[a][b]=D[a][b][c]*C[a];
	       B[a+4][b+2]=0.478;
	        
	       float var_a=B[a][b]*0.48;
	       float var_b=B[a+2][b+1]*0.421;
	        
	       B[a][b]=A[a][b][c]+B[a][b];
	       E[a]=A[a-5][b-2][c-3]-C[a]/E[a]*B[a][b];
	      }

    return 0;
}