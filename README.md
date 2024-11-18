# Hello World Kernel Module

A simple "Hello World" Linux kernel module that demonstrates the basics of kernel module development. This project serves as a beginner-friendly example for understanding how to write, compile, and load a kernel module.

---

## Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [Usage](#usage)

---

## Description

This project includes a basic kernel module that prints messages to the kernel log when loaded and unloaded. It is a foundational project for developers looking to explore Linux kernel programming.

**Features:**
- Logs a message when the module is loaded (`Hello World: Module loaded`).
- Logs a message when the module is unloaded (`Hello World: Module unloaded`).

---

## Requirements

Ensure the following are installed on your system:
1. **Fedora Linux** or any Linux distribution with kernel development tools.
2. Kernel headers and development packages:
   ```bash
   sudo dnf install -y kernel-devel kernel-headers gcc make
   ```
---

## Usage

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/Amid68/Linux-Hello-World 
   cd Linux-Hello-World
   ```

2. **Build the Kernel Module:**
   ```bash
   make
   ```

3. **Insert the Module:**
   ```bash
   sudo insmod hello_world.ko
   ```

4. **Check Kernel Logs:**
   ```bash
   sudo dmesg | tail -n 10
   ```

5. **Remove the Module:**
   ```bash
   sudo rmmod hello_world
   ```

6. **Clean the Build:**
   ```bash
   make clean
   ```
