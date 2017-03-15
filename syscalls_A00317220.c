#include <linux/unistd.h> #include <sys/syscall.h> 
#define__NR_getjiffies 320 int main() {
long jiffies; jiffies = syscall(__NR_getjiffies ); 
printf( "Current jiffies is %lx\n", jiffies ); 
return 0; 
