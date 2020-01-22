#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(330, 950, "zeros");
	int ***A = create_three_dim_int(170, 320, 860, "zeros");

	for (int b = 5; b < 317; b++)
	  for (int a = 5; a < 165; a++)
	  {
	    
	     B[a][b]=B[a+5][b+1]-5;
	    
	     int var_a=B[a][b]+5;
	     int var_b=B[a+5][b+2]/15;
	    
	     B[a][b]=A[a][b][a]/44;
	     A[a][b][a]=A[a+1][b+3][a+2]+B[a][b];
	    
	     int var_c=A[a][b][a]+47;
	     int var_d=A[a+5][b+3][a+2]+33;
	    
	     B[a][b]=A[a][b][a]*B[a][b];
	     B[a][b]=A[a-5][b-5][a-5]-B[a][b];
	    
	     int var_e=B[a][b]-8;
	     int var_f=B[a][b+3]/45;
	  }

    return 0;
}