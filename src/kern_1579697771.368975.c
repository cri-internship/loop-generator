#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(310, 790, "zeros");
	int ***A = create_three_dim_int(170, 400, 500, "zeros");
	int **B = create_two_dim_int(390, 700, "zeros");

	for (int b = 5; b < 395; b++)
	  for (int a = 5; a < 165; a++)
	  {
	    
	     B[a][b]=B[a-2][b-2]*44;
	    
	     B[a][b]=C[a][b];
	    
	     A[a][b][a]=30;
	     A[a+2][b+5][a+3]=3;
	    
	     C[a][b]=28;
	     C[a-5][b-5]=1;
	    
	     int var_a=A[a][b][a]/13;
	     int var_b=A[a+4][b+2][a+5]/30;
	    
	     C[a][b]=A[a][b][a]/B[a][b];
	     A[a][b][a]=A[a+4][b][a+4]/1;
	  }

    return 0;
}