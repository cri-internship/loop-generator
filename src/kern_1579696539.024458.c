#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(510, 560, 650, "zeros");
	int *C = create_one_dim_int(750, "zeros");
	int *B = create_one_dim_int(430, "zeros");

	for (int b = 5; b < 430; b++)
	  for (int a = 5; a < 430; a++)
	  {
	    
	     B[a]=B[a-3]+37;
	    
	     C[a]=C[a]*A[a][b][a]/40;
	     C[a]=0;
	    
	     int var_a=C[a]+48;
	     int var_b=C[a-5]*6;
	    
	     A[a][b][a]=C[a]/B[a]*A[a][b][a];
	     B[a]=C[a+4]*A[a][b][a]/B[a];
	  }

    return 0;
}