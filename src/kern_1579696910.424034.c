#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(740, 460, 770, "ones");
	int **E = create_two_dim_int(820, 460, "ones");
	int *D = create_one_dim_int(180, "ones");
	int *A = create_one_dim_int(150, "ones");
	int **C = create_two_dim_int(760, 290, "ones");

	for (int b = 0; b < 286; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     A[a]=A[a-5]+33;
	    
	     float  var_a=A[a]/22;
	    
	     D[a]=25;
	     float  var_b=D[a]*23;
	    
	     C[a][b]=27;
	     C[a+3][b+4]=0;
	    
	     B[a][b][a]=35;
	     B[a][b+2][a+3]=19;
	  }

    return 0;
}