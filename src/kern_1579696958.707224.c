#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(30, 270, "zeros");
	int *D = create_one_dim_int(170, "zeros");
	int **A = create_two_dim_int(820, 180, "zeros");
	int **C = create_two_dim_int(590, 30, "zeros");
	int *B = create_one_dim_int(490, "zeros");

	for (int b = 5; b < 180; b++)
	  for (int a = 3; a < 29; a++)
	  {
	    
	     B[a]=B[a-3]/A[a][b]*D[a]-E[a][b];
	    
	     E[a][b]=E[a+1][b+1]+26;
	    
	     A[a][b]=A[a+1][b]+C[a][b];
	    
	     A[a][b]=B[a]+E[a][b]*C[a][b]/24;
	    
	     int var_a=E[a][b]+1;
	     int var_b=E[a-2][b-5]-14;
	  }

    return 0;
}