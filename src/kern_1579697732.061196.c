#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(820, "ones");
	int ***A = create_three_dim_int(590, 10, 740, "ones");
	int *B = create_one_dim_int(800, "ones");

	for (int c = 4; c < 740; c++)
	  for (int b = 5; b < 10; b++)
	    for (int a = 5; a < 590; a++)
	    {
	      
	      B[a]=40;
	      float  var_a=B[a]/23;
	      
	      B[a]=B[a-5]*3;
	      
	      C[a]=44;
	      C[a+5]=44;
	      
	      A[a][b][c]=49;
	      A[a-1][b-5][c-4]=37;
	      
	      int var_b=A[a][b][c]+4;
	      int var_c=A[a][b][c]+12;
	    }

    return 0;
}