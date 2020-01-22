#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(460, 280, "zeros");
	int *B = create_one_dim_int(510, "zeros");
	int ***A = create_three_dim_int(420, 470, 730, "zeros");

	for (int b = 3; b < 280; b++)
	  for (int a = 2; a < 420; a++)
	  {
	    
	     B[a]=40;
	     float  var_a=B[a]*49;
	    
	     A[a][b][a]=A[a-2][b-2][a-2]+11;
	    
	     int var_b=B[a]-0;
	     B[a]=32;
	    
	     int var_c=C[a][b]*40;
	     int var_d=C[a][b-3]-35;
	    
	     C[a][b]=B[a]-C[a][b];
	     A[a][b][a]=B[a+5]-A[a][b][a]+A[a][b][a];
	    
	     int var_e=C[a][b]-16;
	     int var_f=C[a-2][b-3]+45;
	  }

    return 0;
}