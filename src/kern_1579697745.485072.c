#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(440, 150, "ones");
	int **C = create_two_dim_int(290, 820, "ones");
	int **A = create_two_dim_int(30, 540, "ones");
	int ***D = create_three_dim_int(530, 830, 950, "ones");

	for (int b = 3; b < 145; b++)
	  for (int a = 1; a < 287; a++)
	  {
	    
	     C[a][b]=C[a-1][b-3]*7+D[a][b][a]/A[a][b];
	    
	     B[a][b]=B[a+2][b+5]/C[a][b]+D[a][b][a];
	    
	     C[a][b]=B[a][b]/C[a][b]-A[a][b]*D[a][b][a];
	     A[a][b]=B[a+4][b]+C[a][b]-A[a][b]/D[a][b][a];
	    
	     int var_a=B[a][b]+26;
	     int var_b=B[a][b+4]*37;
	    
	     B[a][b]=C[a][b]/D[a][b][a]*B[a][b]-A[a][b];
	     D[a][b][a]=C[a+3][b+1]+B[a][b]*D[a][b][a]-A[a][b];
	    
	     int var_c=C[a][b]*15;
	     int var_d=C[a+2][b+2]-46;
	  }

    return 0;
}