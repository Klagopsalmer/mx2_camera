ifneq ($(KERNELRELEASE),)
obj-m += mx27cam.o
mx27cam-objs:= main.o
else
KDIR := ~/armadeus/buildroot/output/build/linux-4.0.5/
CPU := arm
TOOLS := /home/schnegg/armadeus/buildroot/output/host/usr/bin/arm-linux-
PWD := $(shell pwd)
MODPATH := /home/schnegg/armadeus/buildroot/output/images/apf27-root
all: 
	$(MAKE) -C $(KDIR) M=$(PWD) ARCH=$(CPU) CROSS_COMPILE=$(TOOLS) modules
clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
install: 
	$(MAKE) -C $(KDIR) M=$(PWD) INSTALL_MOD_PATH=$(MODPATH) modules_install
endif
