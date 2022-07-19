#include <linux/kernel.h>

asmlinkage long __x64_sys_mycall(void){
	printk("System Call Example!\n");
	return 0;

}
