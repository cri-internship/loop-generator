#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(930, 190, "ones");
	int **A = create_two_dim_int(80, 960, "ones");
	int *B = create_one_dim_int(440, "ones");

	for (int b = 2; b < 190; b++)
	  for (int a = 5; a < 78; a++)
	  {
	    
	     B[a]=B[a-4]+20;
	    
	     C[a][b]=C[a-2][b-2]-B[a]+A[a][b];
	    
	     B[a]=B[a+1]/C[a][b];
	    
	     B[a]=28/A[a][b];
	    
	     A[a][b]=B[a]/10;
	     A[a-5][b]=B[a]-C[a][b];
	    
	     int var_a=A[a][b]/49;
	     int var_b=A[a+2][b+2]+37;
	  }

    return 0;
}