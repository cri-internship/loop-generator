#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(320, "random");
	int **C = create_two_dim_int(580, 980, "random");
	int **B = create_two_dim_int(540, 260, "random");
	int *A = create_one_dim_int(40, "random");
	int **E = create_two_dim_int(650, 990, "random");

	for (int b = 0; b < 975; b++)
	  for (int a = 3; a < 320; a++)
	  {
	    
	     C[a][b]=C[a+5][b+5]/13;
	    
	     E[a][b]=E[a+1][b]/C[a][b]+A[a]*12;
	    
	     int var_a=D[a]*3;
	     int var_b=D[a-3]+34;
	    
	     int var_c=C[a][b]-44;
	     int var_d=C[a+3][b]-41;
	  }

    return 0;
}