/* SPDX-License-Identifier: GPL-2.0+ WITH Linux-syscall-note */
/*
 *	Berkeley style UIO structures	-	Alan Cox 1994.
 *
 *		This program is free software; you can redistribute it and/or
 *		modify it under the terms of the GNU General Public License
 *		as published by the Free Software Foundation; either version
 *		2 of the License, or (at your option) any later version.
 */
#ifndef _UAPI__LINUX_UIO_H
#define _UAPI__LINUX_UIO_H

#include <linux/compiler.h>
#include <linux/types.h>


struct iovec
{
	void __user *iov_base;	/* 指向一个缓冲区，这个缓冲区是存放readv所接收的数据或是writev将要发送的数据。 *) */
	__kernel_size_t iov_len; /* 确定了接收的最大长度以及实际写入的长度。 */
};

/*
 *	UIO_MAXIOV shall be at least 16 1003.1g (5.4.1.1)
 */
 
#define UIO_FASTIOV	8
#define UIO_MAXIOV	1024


#endif /* _UAPI__LINUX_UIO_H */
