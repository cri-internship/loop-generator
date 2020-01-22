#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(510, "ones");
	int **A = create_two_dim_int(620, 860, "ones");
	int *D = create_one_dim_int(390, "ones");
	int **B = create_two_dim_int(880, 130, "ones");

	for (int b = 5; b < 130; b++)
	  for (int a = 4; a < 386; a++)
	  {
	    
	     B[a][b]=B[a-1][b-5]*15;
	    
	     B[a][b]=B[a][b-3]+C[a]/D[a]*A[a][b];
	    
	     B[a][b]=B[a][b-5]+40;
	    
	     A[a][b]=A[a-4][b-4]*B[a][b]+C[a]-B[a][b];
	    
	     int var_a=D[a]/50;
	     D[a]=12;
	    
	     D[a]=D[a+4]/39;
	    
	     A[a][b]=13;
	  }

    return 0;
}