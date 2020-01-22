#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(760, 720, 160, "ones");
	float ***A = create_three_dim_float(980, 810, 50, "ones");

	for (int c = 5; c < 50; c++)
	  for (int b = 4; b < 715; b++)
	    for (int a = 5; a < 755; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-3][c-4]+A[a][b][c];
	      
	      float var_a=B[a][b][c]-0.877;
	      float var_b=B[a+5][b+5][c]*0.565;
	      
	      float var_c=A[a][b][c]-0.22;
	      float var_d=A[a][b-4][c-5]*0.947;
	      
	      float var_e=B[a][b][c]/0.834;
	      float var_f=B[a-5][b-4][c-3]-0.736;
	    }

    return 0;
}