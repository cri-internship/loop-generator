#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(960, "random");
	int ***A = create_three_dim_int(220, 680, 720, "random");
	int *B = create_one_dim_int(490, "random");

	for (int b = 4; b < 678; b++)
	  for (int a = 5; a < 215; a++)
	  {
	    
	     B[a]=B[a-5]-C[a]+A[a][b][a];
	    
	     A[a][b][a]=A[a-5][b-2][a]*B[a];
	    
	     A[a][b][a]=A[a+5][b+1][a+4]-43;
	    
	     int var_a=A[a][b][a]*45;
	     int var_b=A[a-1][b-4][a]*6;
	    
	     int var_c=B[a]+49;
	     int var_d=B[a+3]*10;
	  }

    return 0;
}