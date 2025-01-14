#!/bin/bash

set -e

if [ $# -ne 3 ]; then
    echo "Need 3 arguments: 1) kernel source dir, 2) previous version, 3) version to add"
    exit 1
fi

KERNELDIR=$1
PREVER=$2
KERNELVER=$3

# KERNELDIR=/home/chang/linux-6.5.2
# PREVER=6.5
# KERNELVER=6.5.2

IGCDIR=drivers/net/ethernet/intel/igc

FILES="e1000_82575.c e1000_82575.h e1000_defines.h e1000_hw.h e1000_i210.c e1000_i210.h e1000_mac.c e1000_mac.h e1000_mbx.c e1000_mbx.h e1000_nvm.c e1000_nvm.h e1000_phy.c e1000_phy.h e1000_regs.h igc_ethtool.c igb.h igb_hwmon.c igb_main.c igb_ptp.c"
FILES="igc_base.c igc_diag.c igc_ethtool.c igc_i225.c igc_mac.h igc_nvm.c igc_phy.h igc_tsn.c  igc_xdp.h igc_base.h igc_diag.h igc.h igc_i225.h igc_main.c igc_nvm.h igc_ptp.c igc_tsn.h igc_defines.h igc_dump.c igc_hw.h igc_mac.c igc_phy.c igc_regs.h igc_xdp.c"

set -x

for f in $FILES; do
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
