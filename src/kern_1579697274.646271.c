#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(90, 810, "random");
	float ***C = create_three_dim_float(260, 910, 420, "random");
	float *B = create_one_dim_float(460, "random");
	float **D = create_two_dim_float(260, 440, "random");

	for (int c = 0; c < 417; c++)
	  for (int b = 1; b < 436; b++)
	    for (int a = 0; a < 90; a++)
	    {
	      
	      D[a][b]=D[a+2][b+3]/0.992;
	      
	      C[a][b][c]=0.572;
	      C[a+3][b][c+3]=A[a][b]/B[a];
	      
	      float var_a=D[a][b]*0.291;
	      float var_b=D[a+3][b+2]*0.578;
	      
	      B[a]=A[a][b]+0.915/C[a][b][c];
	      C[a][b][c]=A[a][b-1]/C[a][b][c]+D[a][b]-B[a];
	      
	      float var_c=D[a][b]/0.093;
	      float var_d=D[a+4][b+2]-0.045;
	      
	      float var_e=D[a][b]*0.005;
	      float var_f=D[a][b+4]*0.682;
	    }

    return 0;
}