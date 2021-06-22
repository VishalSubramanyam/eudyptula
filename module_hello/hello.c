#include<linux/module.h>
#include<linux/kernel.h>

static int initFunc(void)
{
	printk(KERN_ALERT "Hello World!\n");
	return 0;
}
static void destrFunc(void)
{
	printk(KERN_ALERT "Haha, Skynet has won!\n");
}
module_init(initFunc);
module_exit(destrFunc);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vishal Subramanyam")
