#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(60, "zeros");
	float ***A = create_three_dim_float(490, 80, 890, "zeros");

	for (int c = 4; c < 889; c++)
	  for (int b = 3; b < 79; b++)
	    for (int a = 5; a < 58; a++)
	    {
	      
	      B[a]=B[a+2]/0.85;
	      
	      B[a]=A[a][b][c];
	      
	      A[a][b][c]=0.993;
	      A[a+3][b+1][c+1]=0.703;
	      
	      float var_a=B[a]+0.439;
	      
	      float var_c=B[a]+0.412;
	      float var_d=B[a-5]*0.014;
	      
	      float var_e=A[a][b][c]+0.44;
	      float var_f=A[a-5][b-3][c-4]*0.22;
	    }

    return 0;
}