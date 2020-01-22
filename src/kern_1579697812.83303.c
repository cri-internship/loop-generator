#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(130, "zeros");
	int **C = create_two_dim_int(410, 230, "zeros");
	int **A = create_two_dim_int(900, 60, "zeros");
	int *D = create_one_dim_int(130, "zeros");

	for (int b = 3; b < 58; b++)
	  for (int a = 3; a < 130; a++)
	  {
	    
	     D[a]=C[a][b];
	     D[a-3]=B[a];
	    
	     int var_a=A[a][b]*30;
	     int var_b=A[a+5][b+2]/29;
	    
	     C[a][b]=C[a][b]/A[a][b]+D[a]*D[a];
	     A[a][b]=C[a-2][b-3]/7;
	  }

    return 0;
}