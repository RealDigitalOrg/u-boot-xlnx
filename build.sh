#!/bin/bash
#
# Script to launch cross compile build for u-boot.
export ARCH=arm
export CROSS_COMPILE=arm-linux-gnueabihf-
export UBOOTVERSION=2017.01-Blackboard
make UBOOTVERSION=$UBOOTVERSION
