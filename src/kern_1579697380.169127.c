#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(720, "zeros");
	int ***D = create_three_dim_int(540, 930, 330, "zeros");
	int **B = create_two_dim_int(230, 570, "zeros");
	int *A = create_one_dim_int(400, "zeros");

	for (int b = 2; b < 570; b++)
	  for (int a = 5; a < 230; a++)
	  {
	    
	     B[a][b]=B[a-5][b]+47;
	    
	     A[a]=A[a-2]+14;
	    
	     B[a][b]=B[a-4][b-2]/36;
	    
	     A[a]=A[a-3]/19;
	    
	     D[a][b][a]=D[a-1][b-2][a]/26;
	    
	     int var_a=A[a]/35;
	     int var_b=A[a+4]*28;
	  }

    return 0;
}