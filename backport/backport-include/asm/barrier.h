#ifndef __BACKPORT_ASM_BARRIER_H
#define __BACKPORT_ASM_BARRIER_H

#include <linux/version.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(3,4,0)
#include_next <asm/barrier.h>
#endif /* >= 3.4 */

#ifndef dma_rmb
#define dma_rmb()	rmb()
#endif

#endif /* __BACKPORT_ASM_BARRIER_H */
