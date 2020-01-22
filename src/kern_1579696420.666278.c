#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(910, 470, "ones");
	int **A = create_two_dim_int(330, 150, "ones");
	int ***C = create_three_dim_int(770, 480, 410, "ones");

	for (int b = 4; b < 468; b++)
	  for (int a = 5; a < 766; a++)
	  {
	    
	     B[a][b]=B[a-5][b-4]*C[a][b][a]+A[a][b];
	    
	     B[a][b]=B[a-5][b-3]-18;
	    
	     B[a][b]=B[a-2][b-2]*28;
	    
	     B[a][b]=B[a+1][b+2]*1;
	    
	     C[a][b][a]=C[a+4][b][a+1]+28;
	    
	     C[a][b][a]=B[a][b];
	    
	     int var_a=C[a][b][a]-17;
	     int var_b=C[a-4][b-2][a-4]+21;
	  }

    return 0;
}