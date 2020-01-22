#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(520, 700, 180, "random");
	float **C = create_two_dim_float(540, 820, "random");
	float **A = create_two_dim_float(280, 800, "random");

	for (int b = 4; b < 695; b++)
	  for (int a = 5; a < 280; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-1][a]*0.34;
	    
	     A[a][b]=C[a][b]+A[a][b]-B[a][b][a];
	     B[a][b][a]=C[a-3][b-4]+A[a][b]-B[a][b][a];
	    
	     C[a][b]=A[a][b]/C[a][b]+0.351;
	     A[a][b]=A[a-2][b]/B[a][b][a]-C[a][b];
	    
	     float var_a=B[a][b][a]+0.929;
	     float var_b=B[a+2][b+2][a+2]-0.513;
	    
	     float var_c=B[a][b][a]+0.703;
	     float var_d=B[a+5][b+1][a+2]/0.619;
	    
	     C[a][b]=A[a][b]*B[a][b][a]/0.93;
	     A[a][b]=A[a-5][b-4]/0.918;
	    
	     float var_e=B[a][b][a]-0.09;
	     float var_f=B[a+4][b+5][a+4]+0.291;
	  }

    return 0;
}