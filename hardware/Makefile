QUAD_CLASS_HOME?=../..
TESTS=controller_board.test
DESIGN=controller_board
EAGLINT_HOME=$(QUAD_CLASS_HOME)/QuadClass-QuadCMS/
RESOURCES_ROOT=$(QUAD_CLASS_HOME)/QuadClass-Resources/
LBRS=$(wildcard $(QUAD_CLASS_HOME)/QuadClass-Quadcopter-Solution/hardware/lbr/*.lbr) $(wildcard lbr/*.lbr) $(wildcard $(RESOURCES_ROOT)/Eagle/lbr/*.lbr)
CHECKS=--check QuadLint.AtmegaChecker EagleLint.BoardStyle.BoardLint EagleLint.SchematicStyle.SchematicLint
CAM_FILE=$(RESOURCES_ROOT)/Eagle/CAM/pcbcart-4layer-values-eagle95.cam
VERSION=v4-rev10-rc6
include $(RESOURCES_ROOT)/make/PCB.make
