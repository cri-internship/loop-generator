#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(740, "random");
	int **A = create_two_dim_int(680, 980, "random");
	int **B = create_two_dim_int(330, 940, "random");

	for (int b = 5; b < 940; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     A[a][b]=A[a+3][b+5]+35;
	    
	     B[a][b]=C[a]/A[a][b];
	     B[a-5][b-2]=A[a][b];
	    
	     int var_a=B[a][b]+50;
	     int var_b=B[a][b-5]+11;
	    
	     int var_c=C[a]*18;
	     int var_d=C[a-5]*18;
	  }

    return 0;
}