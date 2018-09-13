#!/bin/bash
# file checkout.sh
# checkout script for Whiznium SBE core library, release sbecore_awscyg
# author Alexander Wirthmueller
# date created: 14 Aug 2014
# modified: 12 Jun 2016

export set SRCROOT=/home/Administrator/src

mkdir $SRCROOT/sbecore

cp Makefile $SRCROOT/sbecore/

cp ../../*.h $SRCROOT/sbecore/
cp ../../*.cpp $SRCROOT/sbecore/