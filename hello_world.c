// SPDX-License-Identifier: GPL-2.0
/**
 * @file hello_world.c
 * @brief A simple Hello World Kernel Module.
 *
 * @author Ameed Othman
 * @date 2024-11-18
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

#define DRIVER_AUTHOR   "Ameed Othman <othman.ameed@gmail.com>"
#define DRIVER_DESC     "A simple Hello World Kernel Module"
#define DRIVER_VERS     "1.0"

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_VERSION(DRIVER_VERS);

/**
 * @brief The module initialization function
 * @return Returns 0 if successful
 */
static int __init hello_init(void) {
    pr_info("Hello World: Module loaded\n");
    return 0;
}

/**
 * @brief The module cleanup function
 */
static void __exit hello_exit(void) {
    pr_info("Hello World: Module unloaded\n");
}

module_init(hello_init);
module_exit(hello_exit);
