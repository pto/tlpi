#include <stdio.h>
#include <unistd.h>
#include <linux/reboot.h>

#define show(VAL) printf(#VAL " is 0x%lx\n", (long)VAL)

int main()
{
	show(LINUX_REBOOT_MAGIC1);
	show(LINUX_REBOOT_MAGIC2);
	show(LINUX_REBOOT_MAGIC2A);
	show(LINUX_REBOOT_MAGIC2B);
	show(LINUX_REBOOT_MAGIC2C);
}
