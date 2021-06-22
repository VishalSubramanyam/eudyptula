#define pr_fmt(fmt) "%s (%s): " fmt, KBUILD_MODNAME, __func__
#define DEBUG
#include<linux/module.h>
#include<linux/moduleparam.h>
#include<linux/kernel.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vishal Subramanyam");

static int numA = 0;
static int numB = 0;

module_param(numA, int, 0);
MODULE_PARM_DESC(numA, "First operand - integer");
MODULE_PARM_DESC(numB, "Second operand - integer");
module_param(numB, int, 0);

static int sum_initialization(void)
{
	pr_debug("The sum of the two parameters are: %d\n", numA+numB);
	return 0;
}
static void diff_destruction(void)
{
	pr_debug("Their difference is: %d\n", numA-numB); 
}
module_init(sum_initialization);
module_exit(diff_destruction);
