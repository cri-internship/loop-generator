#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(220, 430, 910, "zeros");
	float *D = create_one_dim_float(170, "zeros");
	float *B = create_one_dim_float(120, "zeros");
	float ***C = create_three_dim_float(220, 60, 250, "zeros");

	for (int c = 4; c < 250; c++)
	  for (int b = 5; b < 58; b++)
	    for (int a = 4; a < 170; a++)
	    {
	      
	      float var_a=D[a]/0.667;
	      D[a]=0.712;
	      
	      D[a]=A[a][b][c]/B[a]-C[a][b][c];
	      
	      A[a][b][c]=0.128;
	      A[a-4][b-2][c-1]=0.726;
	      
	      float var_b=C[a][b][c]-0.062;
	      float var_c=C[a-2][b-3][c-1]+0.553;
	      
	      A[a][b][c]=A[a][b][c]-D[a]+C[a][b][c];
	      D[a]=A[a-2][b-5][c-4]+C[a][b][c]-D[a];
	      
	      float var_d=D[a]+0.617;
	      float var_e=D[a-2]/0.138;
	      
	      float var_f=C[a][b][c]*0.831;
	      float var_g=C[a+4][b+2][c]+0.603;
	    }

    return 0;
}