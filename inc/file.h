#ifndef __FILE_H
#define __FILE_H

#include <type.h>

#define NFILE 128

#define F_NONE  0x0
#define F_PIPE  0x1 
#define F_INODE 0x2

struct file{
    uint8_t type;
    uint16_t ref;
    uint8_t readable;
    uint8_t writeable;
    // struct pipe *pipe;
    struct inode *ip;
    uint32_t off;
};

#endif
