#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(690, 850, "zeros");
	int ***A = create_three_dim_int(880, 440, 150, "zeros");
	int **B = create_two_dim_int(970, 860, "zeros");

	for (int b = 1; b < 847; b++)
	  for (int a = 5; a < 690; a++)
	  {
	    
	     B[a][b]=B[a-5][b]/28;
	    
	     B[a][b]=B[a+3][b+4]/27;
	    
	     B[a][b]=B[a+1][b+2]+C[a][b];
	    
	     int var_a=C[a][b]/32;
	     int var_b=C[a][b-1]+18;
	    
	     B[a][b]=B[a][b]-A[a][b][a]/C[a][b];
	     C[a][b]=B[a+2][b+2]+C[a][b]*A[a][b][a];
	    
	     int var_c=C[a][b]+2;
	     int var_d=C[a][b+3]/15;
	  }

    return 0;
}