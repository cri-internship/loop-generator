#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(560, 330, "ones");
	int *C = create_one_dim_int(290, "ones");
	int ***A = create_three_dim_int(140, 40, 770, "ones");

	for (int b = 5; b < 35; b++)
	  for (int a = 5; a < 136; a++)
	  {
	    
	     C[a]=15;
	     float  var_a=C[a]/38;
	    
	     A[a][b][a]=A[a+3][b+2][a+4]*B[a][b]-C[a];
	    
	     A[a][b][a]=A[a+1][b+5][a+3]*28/C[a];
	    
	     int var_b=C[a]-48;
	     int var_c=C[a-5]+49;
	    
	     C[a]=A[a][b][a]+C[a]*B[a][b];
	     B[a][b]=A[a-4][b-5][a-5]*B[a][b];
	  }

    return 0;
}