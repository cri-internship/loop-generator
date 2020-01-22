#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(110, 340, 850, "zeros");
	int ***B = create_three_dim_int(420, 310, 100, "zeros");
	int *A = create_one_dim_int(840, "zeros");

	for (int b = 4; b < 310; b++)
	  for (int a = 5; a < 105; a++)
	  {
	    
	     A[a]=C[a][b][a];
	     B[a][b][a]=A[a]*B[a][b][a];
	    
	     C[a][b][a]=C[a-3][b-4][a-1]/16;
	    
	     B[a][b][a]=B[a-3][b][a-5]/16;
	    
	     A[a]=A[a+1]/15;
	    
	     A[a]=A[a+4]-C[a][b][a]/B[a][b][a];
	    
	     int var_a=A[a]/45;
	     int var_b=A[a+3]/33;
	    
	     int var_c=C[a][b][a]+7;
	     int var_d=C[a+5][b+3][a]*16;
	  }

    return 0;
}