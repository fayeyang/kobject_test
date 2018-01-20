#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>

#include "kobject_test.h"

MODULE_AUTHOR( "faye" );
MODULE_LICENSE( "GPL" );

struct sKobj *sKobj_p;

static __init int kobj_init( void ){
    
    printk( KERN_INFO "kobj_init\n" );
    
    sKobj_p = kzalloc( sizeof(struct sKobj), GFP_KERNEL );
    
    return 0;
}

module_init( kobj_init );

