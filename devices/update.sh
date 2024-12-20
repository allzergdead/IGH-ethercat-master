#!/bin/bash

set -x

KERNELDIR=/home/chang/linux-6.5.2
KERNELVER=6.5
PREVER=4.4

for f in $KERNELDIR/drivers/net/ethernet/{realtek/8139too,realtek/r8169,intel/e100}.c; do
    echo $f
    echo "f = $f"
    #o=${f/./-$KERNELVER-orig}
    filename="${f%.*}" 
    extension="${f##*.}" 
    o="${filename}-$KERNELVER-orig.${extension}"
    echo "o = $o"
    #e=${f//./-$KERNELVER-ethercat.}
    
    filename="${f%.*}" 
    extension="${f##*.}" 
    e="${filename}-$KERNELVER-ethercat.${extension}"
    echo "e = $e"
    
    cp -v $KERNELDIR/$IGCDIR/$f $o
    chmod 644 $o
    cp -v $o $e
    #op=${f//./-$PREVER-orig.}
    filename="${f%.*}" 
    extension="${f##*.}" 
    op="${filename}-$PREVER-orig.${extension}"
    echo "op = $op"
    
    #ep=${f//./-$PREVER-ethercat.}
    filename="${f%.*}" 
    extension="${f##*.}" 
    ep="${filename}-$PREVER-ethercat.${extension}"
    echo "ep = $ep"
    
    diff -u $op $ep | patch -p1 $e
    git add $o $e
done
