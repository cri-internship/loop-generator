#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(360, 430, "ones");
	int *B = create_one_dim_int(350, "ones");
	int **A = create_two_dim_int(820, 490, "ones");

	for (int b = 5; b < 427; b++)
	  for (int a = 5; a < 355; a++)
	  {
	    
	     A[a][b]=A[a+4][b+3]/3;
	    
	     C[a][b]=B[a];
	     C[a+5][b+3]=A[a][b]/B[a];
	    
	     int var_a=A[a][b]*19;
	    
	     int var_c=C[a][b]/7;
	     int var_d=C[a-5][b-5]*1;
	  }

    return 0;
}