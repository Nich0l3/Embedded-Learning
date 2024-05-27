void critical_func(int val); // extern is assumed for the function

void func(void){
	critical_func(0);
}
